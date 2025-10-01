#include <string>
#include <vector>
using namespace std;

class User {
private:
    int id;                      
    string name;                   
    vector<string> borrowedIsbns; 

public:
    User(int id, string name);

   // Getters
    int getId();
    string getName();
    vector<string> getBorrowedIsbns();

    // Setters
    void setName(string n);
  
    bool hasBorrowed(const string &isbn);      
    void borrowBook(const string &isbn);       
    void returnBook(const string &isbn);
};
