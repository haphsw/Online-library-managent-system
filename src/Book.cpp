#include "Book.h"

Book::Book(string t, string a, string i, int year, int copies, int available){
  title = t;
  author = a;
  isbn = i;
  publishedYear = year;
  totalCopies = copies;
  availableCopies = available;
  
}

