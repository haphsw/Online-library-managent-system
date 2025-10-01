#include <string>
using namespace std;

class Book{
public:
  string title;
  string author;
  string isbn;
  int publishedYear;
  int totalCopies;
  int availableCopies;

  Book(string t, string a, string i, int year, int copies, int available);

  bool borrowBook();
  bool returnBook();
      
};


