# Online-library-managent-system

This project is an online library management system implemented using object oriented programming in c++.
Allows adding, removing and searching books, adding user, borrowing and returning books.

The project has 3 classes; Book,User and Library.

  Book: Represents a library book (title, author, year, availability). 
  
  User: Represents a library user who can borrow and return books.
  
  Library: Manages the collection of books and users, with methods to add,remove,search,borrow and return book.
  
The system also includes test cases to check the correctness of each method.

Design Choices include:

  Encapsulation: Each entity is represented as a separate class with private data and public methods.
  
  Testing: A simple test is included to verify system behavior. 

Test Result:

Borrowed books after borrowing:
Mey: C++ Guide, 
Haph: Python Basics, 
Ayzal: Java Fundamentals, 

After trying to borrow already borrowed books:
Mey: C++ Guide, 
Haph: Python Basics, 

After returning some books:
Mey: 
Haph: 
Ayzal after returning unborrowed book: Java Fundamentals, 
Found book: OOP
Book not found.
  
How to Compile and Run

Make sure you have a C++ compiler installed.  
You can also use an online C++ compiler to run the program.

