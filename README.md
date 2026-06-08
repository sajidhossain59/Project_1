Library Management System
A lightweight, console-based Library Management System written in C. This application allows users to manage a collection of books with features like adding, searching, counting, removing, and listing books. It utilizes file handling to ensure your data is permanently saved and reloaded every time you launch the application.

🚀 Features
Persistent Storage: Reads from and writes to a library.txt file automatically.

Add Books: Dynamically add new titles and authors to the database.

Search Functionality: * Search for a specific book by its unique title.

Filter and list all books written by a specific author.

Inventory Management: Displays the total number of books currently available.

Remove Books: Delete books from the system; the array shifts automatically and updates the flat-file database.

Input Validation: Basic protection against invalid inputs (such as entering letters when an integer option is expected).

🛠️ How It Works (Data Format)
The system records book information inside a plain text file named library.txt. The data is organized using a pipe-delimited format (|):

Plaintext
The C Programming Language|Dennis Ritchie
Clean Code|Robert C. Martin
💻 Getting Started
Prerequisites
You need a C compiler (like gcc) installed on your operating system.

Compilation
Open your terminal or command prompt, navigate to the project directory, and compile the program using the following command:

Bash
gcc main.c -o library_system
(Note: Replace main.c with the actual name of your C file if it differs.)

Running the Application
Execute the compiled binary:

On Linux/macOS:

Bash
./library_system
On Windows:

DOS
library_system.exe
📖 Usage Guide
When you launch the program, you will be greeted with the following interactive menu:

Plaintext
----------Welcome to Sylhet Engineering College Library----------

Enter an option

1. Add a book
2. Search a book using its title
3. Show available books by Author
4. Count books
5. Remove a book
6. Show all available books
7. Exit

----------------------------------
Enter your option: 
Simply type the integer corresponding to your choice and press Enter to follow the on-screen prompts.

⚠️ Known Limitations & Future Scope
Fixed Database Capacity: The application currently supports a maximum of 100 books due to a static array size allocation (struct Book books[100];).

Case Sensitivity: Book searches and author lookups are strictly case-sensitive.

No Duplicate Checks: The system currently allows multiple entries with identical titles.

📄 License
This project is open-source and available under the MIT License.
