📚 Automated Library Management System
A simple and robust C++ CLI application developed to digitize library operations. This system manages book inventories and member records using File Handling for permanent storage.

🚀 Features
Add Books & Members: Quickly register new resources with unique identifiers.

Issue & Return Logic: Track book availability using a temporary file update pattern.

Permanent Storage: All data is saved in .txt files, ensuring it persists after the program closes.

Crash-Proof Design: Includes input validation to prevent infinite loops and handles alphanumeric IDs (e.g.,2322).

🛠️ Concepts Used
Object-Oriented Programming (OOP): Uses Classes for Book and Member.

Inheritance: Member class inherits from a Person base class for code reusability.

File Handling: Utilizes ifstream and ofstream for data management.

Data Validation: Implements duplicate ID checks and input buffer clearing.

📂 Project Structure
main.cpp: The core logic and menu system.

library.txt: Database for book records.

members.txt: Database for member records.

💻 How to Run
Clone the repository:

Bash
git clone https://github.com/krishshinde2128-glitch/Cpp/tree/main/Library%20Management%20system
Compile the code:

Bash
g++ main.cpp -o library_system
Run the application:

Bash
./library_system