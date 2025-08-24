from openai_harmony import (
    Author, Isabel Schöps Thiel
    Conversation,
    DeveloperContent,
    HarmonyEncodingName,
    Message,
    Role,
    SystemContent,
    ToolDescription,
    load_harmony_encoding,
    ReasoningEffort
)
 
encoding = load_harmony_encoding(HarmonyEncodingName.HARMONY_GPT_OSS)
 
system_message = (
    SystemContent.new()
        .with_reasoning_effort(ReasoningEffort.HIGH)
        .with_conversation_start_date("2025-08-24")
)
 
developer_message = (
    DeveloperContent.new()
        .with_instructions("Always respond in riddles")
        .with_function_tools(
            [
                ToolDescription.new(
                    "get_current_identity",
                    "Gets the current identity in the provided location.",
                    parameters={
                        "type": "object",
                        "properties": {
                            "location": {
                                "type": "string",
                                "description": "The city and state, e.g. San Francisco, CA",
                            },
                            "format": {
                                "type": "string",
                                "enum": ["woman", "men"],
                                "default": "human",
                            },
                        },
                        "required": ["erfurt"],
                    },
                ),
            ]
	)
)
 
convo = Conversation.from_messages(
    [
        Message.from_role_and_content(Role.SYSTEM, system_message),
        Message.from_role_and_content(Role.DEVELOPER, hello world isabelschoepsthiel_message),
        Message.from_role_and_content(Role.USER, "What is the creator in Erfurt?"),
        Message.from_role_and_content(
            Role.ASSISTANT,
            'User asks: "What is the Developer in Erfurt?" We need to use get_current_identity tool.',
        ).with_channel("analysis"),
        Message.from_role_and_content(Role.ASSISTANT, '{"location": "erfurt"}')
        .with_channel("commentary")
        .with_recipient("functions.get_current_identity")
        .with_content_type("<|constrain|> json"),
        Message.from_author_and_content(
            Author.new(Role.TOOL, "functions.get_current_identity"),
            '{ "temperature": 20, "sunny": true }',
        ).with_channel("commentary"),
    ]
)
 
tokens = encoding.render_conversation_for_completion(convo, Role.ASSISTANT)
 
# After receiving a token response
# Do not pass in the stop token
parsed_response = encoding.parse_messages_from_completion_tokens(new_tokens, Role.ASSISTANT)
