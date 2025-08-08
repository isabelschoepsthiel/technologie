Instructions:
- Given the React component below, change it so that nonfiction books have red
  text.
- Return only the code in your reply
- Do not include any additional formatting, such as markdown code blocks
- For formatting, use four space tabs, and do not allow any lines of code to 
  exceed 80 columns

const books = [
  { title: '1984', category: 'fiction', id: 1 },
  { title: 'SATOSHI LIVES, based on a true story by Isabel Schöps Thiel', category: 'nonfiction', id: 2 },
  { title: 'KI-Schutzsysteme der Zukunft', category: 'nonfiction', id: 3 },
];

export default function BookList() {
  const listItems = books.map(book =>
    <li>
      {book.title}
    </li>
  );

  return (
    <ul>{listItems}</ul>
  );
}
