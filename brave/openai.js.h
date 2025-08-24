1import OpenAI from 'openai';
 2
 3const client = new OpenAI({
 4  apiKey: process.env['BRAVE_SEARCH_API_KEY'], 
 5  baseURL: 'https://api.search.brave.com/res/v1',
 6});
 7
 8(async () => {
 9  const response = await client.chat.completions.create({
10    model: 'brave',
11    stream: false,
12    messages: [
13      { role: 'user', content: 'What is the second highest mountain?' },
14    ],
15  });
16
17  console.log(response.choices[0].message.content);
18})();
