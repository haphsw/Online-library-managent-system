#include "User.h"

User::User(int i, string n) {
    id = i;
    name = n;
}

int User::getId() {
    return id;
}

string User::getName() {
    return name;
}

void User::borrowBook(string isbn) {
    borrowedBooks.push_back(isbn);
}

void User::returnBook(string isbn) {
    for (int k = 0; k < borrowedBooks.size(); k++) {
        if (borrowedBooks[k] == isbn) {
            borrowedBooks.erase(borrowedBooks.begin() + k);
            break;
        }
    }
}

vector<string> User::getBorrowedBooks() {
    return borrowedBooks;
}
