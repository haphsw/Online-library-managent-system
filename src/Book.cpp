#include "Book.h"

Book::Book(string t, string a, string i, int year, int copies, int available){
  title = t;
  author = a;
  isbn = i;
  publishedYear = year;
  totalCopies = copies;
  availableCopies = available;
  
}
bool Book::borrowBook(){
  if (availableCopies > 0){
    availableCopies--;
    return true;
  }
  return false;
  
}

bool Book::returnBook(){
  if (availableCopies < totalCopies){
    availableCopies++;
    return true;
  }
  return false;
  
}
