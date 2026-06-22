# SEC Library Management System 📚

A lightweight, console-based Library Management System written in **C**. This application allows users to manage a book catalog efficiently using an in-memory database (structures) coupled with persistent storage via a plain text file.

---

## 🚀 Features

* **Persistent Storage**: Automatically saves and loads data from `library.txt`.
* **Add Books**: Dynamically expand your library collection.
* **Smart Searching**: Search for books instantly by **Title** or filter all books written by a specific **Author**.
* **Global Overview**: View a running count of total inventory or print a detailed breakdown of all available books.
* **Remove Books**: Shift elements internally and instantly sync structural removals back to the text database.
* **Robust Input Validation**: Prevents application crashes from accidental string injections on numerical menus.

---

## 🛠️ Tech Stack & Concepts Used

* **Language**: C (C99 Standard)
* **File Handling**: Stream-based I/O (`fopen`, `fscanf`, `fprintf`) with pipes (`|`) acting as data delimiters.
* **Data Structures**: Array of Structures (`struct`) for tracking sequential book profiles.
* **Memory Blocks**: Internal data manipulation using buffer strings (`char` arrays) and basic element shifting algorithms for deletions.

---

## 📂 File Structure

* `main.c` - The core source code containing the logic, UI menu, and file handlers.
* `library.txt` *(Auto-generated)* - The text-based database file where books are stored in a `Title|Author` schema.

---


📄 License
This project is open-source and available under the MIT License.
>>>>>>> d1279c79bcaa3829e8f64de8b0c15d5eaf9b0db2
