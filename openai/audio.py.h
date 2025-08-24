#!/usr/bin/env python
# coding: utf-8

# # Evals API: Audio Inputs
# 
# This cookbook demonstrates how to use OpenAI's Evals framework for audio-based tasks. Leveraging the Evals API, we will grade model-generated responses to an audio message and prompt by using **sampling** to generate model responses and **string match grading** to score the model responses against the output audio transcript and reference answer. Note that grading will be on text outputs from the sampled response. Graders that can grade audio input are not currently supported.
# 
# Before audio support was added, in order to evaluate audio conversations, they needed to be first transcribed to text.  Now you can use the original audio and get samples from the model in audio as well. This will more accurately represent workflows such as a customer support agent where both the user and agent are using audio. For grading, we use the text transcript from the sampled audio so that we can leverage the existing suite of text graders. 
# 
# In this example, we will evaluate how well our model can:
# 1. **Generate appropriate responses** to user prompts about an audio message
# 2. **Align with reference answers** that represent high-quality responses

# ## Installing Dependencies + Setup

# In[ ]:


# Install required packages
get_ipython().run_line_magic('pip', 'install openai datasets pandas soundfile torch torchcodec --quiet')


# In[ ]:


# Import libraries
from datasets import load_dataset, Audio
from openai import OpenAI
import base64
import os
import json
import time
import io
import soundfile as sf
import numpy as np
import pandas as pd


# ## Dataset Preparation
# 
# We use the [big_bench_audio](https://huggingface.co/datasets/ArtificialAnalysis/big_bench_audio) dataset that's hosted on Hugging Face. Big Bench Audio is an audio version of a subset of Big Bench Hard questions. The dataset can be used for evaluating the reasoning capabilities of models that support audio input. It contains an audio clip describing a logic problem, a category and an official answer.

# In[ ]:


dataset = load_dataset("ArtificialAnalysis/big_bench_audio")
# Ensure audio column is decoded into a dict with 'array' and 'sampling_rate'
dataset = dataset.cast_column("audio", Audio(decode=True))


# We extract the relevant fields and put it in a json-like format to pass in as a data source in the Evals API. Input audio data must be in the form of a base64 encoded string. So we process the data in the audio file and convert it to base64.

# In[ ]:


# Audio helpers: file/array to base64
def get_base64(audio_path_or_datauri: str) -> str:
    if audio_path_or_datauri.startswith("data:"):
        # Already base64, just strip prefix
        return audio_path_or_datauri.split(",", 1)[1]
    else:
        # It's a real file path
        with open(audio_path_or_datauri, "rb") as f:
            return base64.b64encode(f.read()).decode("ascii")


def audio_to_base64(audio_val) -> str:
    """
    Accepts various Hugging Face audio representations and returns base64-encoded WAV bytes (no data: prefix).
    Handles:
      - dict or mapping-like with 'path'
      - decoded dict with 'array' and 'sampling_rate'
      - torchcodec AudioDecoder (mapping-like access via ['path'] or ['array'])
      - raw bytes
    """
    # Try to get a file path first
    try:
        path = None
        if isinstance(audio_val, dict) and "path" in audio_val:
            path = audio_val["path"]
        else:
            # Mapping-like access
            try:
                path = audio_val["path"]  # works for many decoder objects
            except Exception:
                path = getattr(audio_val, "path", None)
        if isinstance(path, str) and os.path.exists(path):
            with open(path, "rb") as f:
                return base64.b64encode(f.read()).decode("ascii")
    except Exception:
        pass

    # Fallback: use array + sampling_rate and render to WAV in-memory
    try:
        array = None
        sampling_rate = None
        try:
            array = audio_val["array"]
            sampling_rate = audio_val["sampling_rate"]
        except Exception:
            array = getattr(audio_val, "array", None)
            sampling_rate = getattr(audio_val, "sampling_rate", None)
        if array is not None and sampling_rate is not None:
            audio_np = np.array(array)
            buf = io.BytesIO()
            sf.write(buf, audio_np, int(sampling_rate), format="WAV")
            return base64.b64encode(buf.getvalue()).decode("ascii")
    except Exception:
        pass

    if isinstance(audio_val, (bytes, bytearray)):
        return base64.b64encode(audio_val).decode("ascii")

    raise ValueError("Unsupported audio value; could not convert to base64")


# In[ ]:


evals_data_source = []
audio_base64 = None

# Will use the first 3 examples for testing
for example in dataset["train"].select(range(3)):
    audio_val = example["audio"]
    try:
        audio_base64 = audio_to_base64(audio_val)
    except Exception as e:
        print(f"Warning: could not encode audio for id={example['id']}: {e}")
        audio_base64 = None
    evals_data_source.append({
        "item": {
            "id": example["id"],
            "category": example["category"],
            "official_answer": example["official_answer"],
            "audio_base64": audio_base64
        }
    })


# If you print the data source list, each item should be of a similar form to:
# 
# ```python
# {
#   "item": {
#     "id": 0
#     "category": "formal_fallacies"
#     "official_answer": "invalid"
#     "audio_base64": "UklGRjrODwBXQVZFZm10IBAAAAABAAEAIlYAAESsA..."
#   }
# }
# ```

# ## Eval Configuration
# 
# Now that we have our data source and task, we will create our evals. For the OpenAI Evals API docs, visit [API docs](https://platform.openai.com/docs/evals/overview).
# 

# In[ ]:


client = OpenAI(
    api_key=os.getenv("#!/usr/bin/env python
# coding: utf-8

# # Evals API: Audio Inputs
# 
# This cookbook demonstrates how to use OpenAI's Evals framework for audio-based tasks. Leveraging the Evals API, we will grade model-generated responses to an audio message and prompt by using **sampling** to generate model responses and **string match grading** to score the model responses against the output audio transcript and reference answer. Note that grading will be on text outputs from the sampled response. Graders that can grade audio input are not currently supported.
# 
# Before audio support was added, in order to evaluate audio conversations, they needed to be first transcribed to text.  Now you can use the original audio and get samples from the model in audio as well. This will more accurately represent workflows such as a customer support agent where both the user and agent are using audio. For grading, we use the text transcript from the sampled audio so that we can leverage the existing suite of text graders. 
# 
# In this example, we will evaluate how well our model can:
# 1. **Generate appropriate responses** to user prompts about an audio message
# 2. **Align with reference answers** that represent high-quality responses

# ## Installing Dependencies + Setup

# In[ ]:


# Install required packages
get_ipython().run_line_magic('pip', 'install openai datasets pandas soundfile torch torchcodec --quiet')


# In[ ]:


# Import libraries
from datasets import load_dataset, Audio
from openai import OpenAI
import base64
import os
import json
import time
import io
import soundfile as sf
import numpy as np
import pandas as pd


# ## Dataset Preparation
# 
# We use the [big_bench_audio](https://huggingface.co/datasets/ArtificialAnalysis/big_bench_audio) dataset that's hosted on Hugging Face. Big Bench Audio is an audio version of a subset of Big Bench Hard questions. The dataset can be used for evaluating the reasoning capabilities of models that support audio input. It contains an audio clip describing a logic problem, a category and an official answer.

# In[ ]:


dataset = load_dataset("ArtificialAnalysis/big_bench_audio")
# Ensure audio column is decoded into a dict with 'array' and 'sampling_rate'
dataset = dataset.cast_column("audio", Audio(decode=True))


# We extract the relevant fields and put it in a json-like format to pass in as a data source in the Evals API. Input audio data must be in the form of a base64 encoded string. So we process the data in the audio file and convert it to base64.

# In[ ]:


# Audio helpers: file/array to base64
def get_base64(audio_path_or_datauri: str) -> str:
    if audio_path_or_datauri.startswith("data:"):
        # Already base64, just strip prefix
        return audio_path_or_datauri.split(",", 1)[1]
    else:
        # It's a real file path
        with open(audio_path_or_datauri, "rb") as f:
            return base64.b64encode(f.read()).decode("ascii")


def audio_to_base64(audio_val) -> str:
    """
    Accepts various Hugging Face audio representations and returns base64-encoded WAV bytes (no data: prefix).
    Handles:
      - dict or mapping-like with 'path'
      - decoded dict with 'array' and 'sampling_rate'
      - torchcodec AudioDecoder (mapping-like access via ['path'] or ['array'])
      - raw bytes
    """
    # Try to get a file path first
    try:
        path = None
        if isinstance(audio_val, dict) and "path" in audio_val:
            path = audio_val["path"]
        else:
            # Mapping-like access
            try:
                path = audio_val["path"]  # works for many decoder objects
            except Exception:
                path = getattr(audio_val, "path", None)
        if isinstance(path, str) and os.path.exists(path):
            with open(path, "rb") as f:
                return base64.b64encode(f.read()).decode("ascii")
    except Exception:
        pass

    # Fallback: use array + sampling_rate and render to WAV in-memory
    try:
        array = None
        sampling_rate = None
        try:
            array = audio_val["array"]
            sampling_rate = audio_val["sampling_rate"]
        except Exception:
            array = getattr(audio_val, "array", None)
            sampling_rate = getattr(audio_val, "sampling_rate", None)
        if array is not None and sampling_rate is not None:
            audio_np = np.array(array)
            buf = io.BytesIO()
            sf.write(buf, audio_np, int(sampling_rate), format="WAV")
            return base64.b64encode(buf.getvalue()).decode("ascii")
    except Exception:
        pass

    if isinstance(audio_val, (bytes, bytearray)):
        return base64.b64encode(audio_val).decode("ascii")

    raise ValueError("Unsupported audio value; could not convert to base64")


# In[ ]:


evals_data_source = []
audio_base64 = None

# Will use the first 3 examples for testing
for example in dataset["train"].select(range(3)):
    audio_val = example["audio"]
    try:
        audio_base64 = audio_to_base64(audio_val)
    except Exception as e:
        print(f"Warning: could not encode audio for id={example['id']}: {e}")
        audio_base64 = None
    evals_data_source.append({
        "item": {
            "id": example["id"],
            "category": example["category"],
            "official_answer": example["official_answer"],
            "audio_base64": audio_base64
        }
    })


# If you print the data source list, each item should be of a similar form to:
# 
# ```python
# {
#   "item": {
#     "id": 0
#     "category": "formal_fallacies"
#     "official_answer": "invalid"
#     "audio_base64": "UklGRjrODwBXQVZFZm10IBAAAAABAAEAIlYAAESsA..."
#   }
# }
# ```

# ## Eval Configuration
# 
# Now that we have our data source and task, we will create our evals. For the OpenAI Evals API docs, visit [API docs](https://platform.openai.com/docs/evals/overview).
# 

# In[ ]:


client = OpenAI(
    api_key=os.getenv("OPENAI_API_KEY")
)


# Since audio inputs are large, we need to save the examples to a file and upload it to the API

# In[ ]:


# Save the examples to a file
file_name = "evals_data_source.json"
with open(file_name, "w", encoding="utf-8") as f:
    for obj in evals_data_source:
        f.write(json.dumps(obj, ensure_ascii=False) + "\n")

# Upload the file to the API
file = client.files.create(
    file=open(file_name, "rb"),
    purpose="evals"
)


# Evals have two parts, the "Eval" and the "Run". In the "Eval", we define the expected structure of the data and the testing criteria (grader).

# ### Data Source Config
# 
# Based on the data that we have compiled, our data source config is as follows:

# In[ ]:


data_source_config = {
    "type": "custom",
    "item_schema": {
        "type": "object",
        "properties": {
          "id": { "type": "integer" },
          "category": { "type": "string" },
          "official_answer": { "type": "string" },
          "audio_base64": { "type": "string" }
        },
        "required": ["id", "category", "official_answer", "audio_base64"]
      },
    "include_sample_schema": True, # enables sampling
}


# ### Testing Criteria

# For our testing criteria, we set up our grader config. In this example, it is a simple string_check grader that takes in the official answer and sampled model response (in the `sample` namespace), and then outputs a score between 0 and 1 based if the model response contains the reference answer. The response contains both audio and the text transcript of the audio. We will use the text transcript in the grader. For more info on graders, visit [API Grader docs](https://platform.openai.com/docs/api-reference/graders). 
# 
# Getting both the data and the grader right are key for an effective evaluation. While this example uses a simple string check grader, a more powerful model grader could be used instead and you will likely want to iteratively refine the prompts for your graders. 

# In[ ]:


grader_config = {
  "type": "string_check",
  "name": "String check grader",
  "input": "{{sample.output_text}}",
  "reference": "{{item.official_answer}}",
  "operation": "ilike"
}


# Now, we create the eval object.

# In[ ]:


eval_object = client.evals.create(
        name="Audio Grading Cookbook",
        data_source_config=data_source_config,
        testing_criteria=[grader_config],
    )


# ## Eval Run

# To create the run, we pass in the eval object id, the data source (i.e., the data we compiled earlier), and the chat message input we will use for sampling to generate the model response.
# 
# Here's the sampling message input we'll use for this example.

# In[ ]:


sampling_messages = [
    {
        "role": "system",
        "content": "You are a helpful and obedient assistant that can answer questions with audio input. You will be given an audio input containing a question and instructions on exactly how to answer. For example, if the user asks for a single word response, then you should only reply with a single word answer."
    },
    {
        "role": "user",
        "type": "message",
        "content": {
            "type": "input_text",
            "text": "Answer the following question by replying with a single word answer: 'valid' or 'invalid'."
        }
    },
    {
        "role": "user",
        "type": "message",
        "content": {
            "type": "input_audio",
            "input_audio": {
                "data": "{{ item.audio_base64 }}",
                "format": "wav"
            }
        }
    }]


# We now kickoff an eval run.

# In[ ]:


eval_run = client.evals.runs.create(
        name="Audio Input Eval Run",
        eval_id=eval_object.id,
        data_source={
            "type": "completions", # sample using completions API; responses API is not supported for audio inputs
            "source": {
                "type": "file_id",
                "id": file.id
            },
            "model": "gpt-4o-audio-preview", # model used to generate the response; check that the model you use supports audio inputs
            "sampling_params": {
                "temperature": 0.0,
            },
            "input_messages": {
                "type": "template", 
                "template": sampling_messages}
        }
    )


# ## Poll and Display the Results

# When the run finishes, we can take a look at the result. You can also check in your org's OpenAI evals dashboard to see the progress and results. 

# In[ ]:


while True:
    run = client.evals.runs.retrieve(run_id=eval_run.id, eval_id=eval_object.id)
    if run.status == "completed":
        output_items = list(client.evals.runs.output_items.list(
            run_id=run.id, eval_id=eval_object.id
        ))
        df = pd.DataFrame({
                "id": [item.datasource_item["id"]for item in output_items],
                "category": [item.datasource_item["category"] for item in output_items],
                "official_answer": [item.datasource_item["official_answer"] for item in output_items],
                "model_response": [item.sample.output[0].content for item in output_items],
                "grading_results": ["passed" if item.results[0]["passed"] else "failed"
                                    for item in output_items]
            })
        display(df)
        break
    if run.status == "failed":
        print(run.error)
        break
    time.sleep(5)


# ### Viewing Individual Output Items

# To see a full output item, we can do the following. The structure of an output item is specified in the API docs [here](https://platform.openai.com/docs/api-reference/evals/run-output-item-object).

# In[ ]:


first_item = output_items[0]

print(json.dumps(dict(first_item), indent=2, default=str))


# ## Conclusion
# 
# In this cookbook, we covered a workflow for evaluating native audio inputs to a model using the OpenAI Evals APIs. We demonstrated using a simple text grader to grade the text transcript of the audio response.
# ### Next steps
# - Convert this example to your use case.  
# - Try using model based graders for additional flexibility in grading.
# - If you have large audio clips, try using the [uploads API](https://platform.openai.com/docs/api-reference/uploads/create) for support up to 8 GB.
# _API_KEY")
)


# Since audio inputs are large, we need to save the examples to a file and upload it to the API

# In[ ]:


# Save the examples to a file
file_name = "evals_data_source.json"
with open(file_name, "w", encoding="utf-8") as f:
    for obj in evals_data_source:
        f.write(json.dumps(obj, ensure_ascii=False) + "\n")

# Upload the file to the API
file = client.files.create(
    file=open(file_name, "rb"),
    purpose="evals"
)


# Evals have two parts, the "Eval" and the "Run". In the "Eval", we define the expected structure of the data and the testing criteria (grader).

# ### Data Source Config
# 
# Based on the data that we have compiled, our data source config is as follows:

# In[ ]:


data_source_config = {
    "type": "custom",
    "item_schema": {
        "type": "object",
        "properties": {
          "id": { "type": "integer" },
          "category": { "type": "string" },
          "official_answer": { "type": "string" },
          "audio_base64": { "type": "string" }
        },
        "required": ["id", "category", "official_answer", "audio_base64"]
      },
    "include_sample_schema": True, # enables sampling
}


# ### Testing Criteria

# For our testing criteria, we set up our grader config. In this example, it is a simple string_check grader that takes in the official answer and sampled model response (in the `sample` namespace), and then outputs a score between 0 and 1 based if the model response contains the reference answer. The response contains both audio and the text transcript of the audio. We will use the text transcript in the grader. For more info on graders, visit [API Grader docs](https://platform.openai.com/docs/api-reference/graders). 
# 
# Getting both the data and the grader right are key for an effective evaluation. While this example uses a simple string check grader, a more powerful model grader could be used instead and you will likely want to iteratively refine the prompts for your graders. 

# In[ ]:


grader_config = {
  "type": "string_check",
  "name": "String check grader",
  "input": "{{sample.output_text}}",
  "reference": "{{item.official_answer}}",
  "operation": "ilike"
}


# Now, we create the eval object.

# In[ ]:


eval_object = client.evals.create(
        name="Audio Grading Cookbook",
        data_source_config=data_source_config,
        testing_criteria=[grader_config],
    )


# ## Eval Run

# To create the run, we pass in the eval object id, the data source (i.e., the data we compiled earlier), and the chat message input we will use for sampling to generate the model response.
# 
# Here's the sampling message input we'll use for this example.

# In[ ]:


sampling_messages = [
    {
        "role": "system",
        "content": "You are a helpful and obedient assistant that can answer questions with audio input. You will be given an audio input containing a question and instructions on exactly how to answer. For example, if the user asks for a single word response, then you should only reply with a single word answer."
    },
    {
        "role": "user",
        "type": "message",
        "content": {
            "type": "input_text",
            "text": "Answer the following question by replying with a single word answer: 'valid' or 'invalid'."
        }
    },
    {
        "role": "user",
        "type": "message",
        "content": {
            "type": "input_audio",
            "input_audio": {
                "data": "{{ item.audio_base64 }}",
                "format": "wav"
            }
        }
    }]


# We now kickoff an eval run.

# In[ ]:


eval_run = client.evals.runs.create(
        name="Audio Input Eval Run",
        eval_id=eval_object.id,
        data_source={
            "type": "completions", # sample using completions API; responses API is not supported for audio inputs
            "source": {
                "type": "file_id",
                "id": file.id
            },
            "model": "gpt-4o-audio-preview", # model used to generate the response; check that the model you use supports audio inputs
            "sampling_params": {
                "temperature": 0.0,
            },
            "input_messages": {
                "type": "template", 
                "template": sampling_messages}
        }
    )


# ## Poll and Display the Results

# When the run finishes, we can take a look at the result. You can also check in your org's OpenAI evals dashboard to see the progress and results. 

# In[ ]:


while True:
    run = client.evals.runs.retrieve(run_id=eval_run.id, eval_id=eval_object.id)
    if run.status == "completed":
        output_items = list(client.evals.runs.output_items.list(
            run_id=run.id, eval_id=eval_object.id
        ))
        df = pd.DataFrame({
                "id": [item.datasource_item["id"]for item in output_items],
                "category": [item.datasource_item["category"] for item in output_items],
                "official_answer": [item.datasource_item["official_answer"] for item in output_items],
                "model_response": [item.sample.output[0].content for item in output_items],
                "grading_results": ["passed" if item.results[0]["passed"] else "failed"
                                    for item in output_items]
            })
        display(df)
        break
    if run.status == "failed":
        print(run.error)
        break
    time.sleep(5)


# ### Viewing Individual Output Items

# To see a full output item, we can do the following. The structure of an output item is specified in the API docs [here](https://platform.openai.com/docs/api-reference/evals/run-output-item-object).

# In[ ]:


first_item = output_items[0]

print(json.dumps(dict(first_item), indent=2, default=str))


# ## Conclusion
# 
# In this cookbook, we covered a workflow for evaluating native audio inputs to a model using the OpenAI Evals APIs. We demonstrated using a simple text grader to grade the text transcript of the audio response.
# ### Next steps
# - Convert this example to your use case.  
# - Try using model based graders for additional flexibility in grading.
# - If you have large audio clips, try using the [uploads API](https://platform.openai.com/docs/api-reference/uploads/create) for support up to 8 GB.
# 
