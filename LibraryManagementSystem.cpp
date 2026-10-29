
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool issued;

    Book(int i, string t, string a, bool status = false) {
        id = i;
        title = t;
        author = a;
        issued = status;
    }
};

const string FILE_NAME = "books.txt";

// Load books from file
vector<Book> loadBooks() {
    vector<Book> books;
    ifstream file(FILE_NAME);
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string id, title, author, status;

        if (getline(ss, id, '|') &&
            getline(ss, title, '|') &&
            getline(ss, author, '|') &&
            getline(ss, status)) {
            try {
                int bookId = stoi(id);
                int issuedStatus = stoi(status);

                if (bookId > 0 &&
                    (issuedStatus == 0 || issuedStatus == 1)) {
                    books.emplace_back(
                        bookId, title, author, issuedStatus == 1
                    );
                }
            } catch (...) {
                // Skip invalid records
            }
        }
    }

    return books;
}

// Save books to file
void saveBooks(const vector<Book>& books) {
    ofstream file(FILE_NAME);

    for (const Book& b : books) {
        file << b.id << "|" << b.title << "|"
             << b.author << "|" << b.issued << "\n";
    }
}

// Add a book
void addBook() {
    vector<Book> books = loadBooks();
    int id;
    string title, author;

    cout << "Enter Book ID: ";
    cin >> id;

    if (id <= 0) {
        cout << "Invalid Book ID!\n";
        return;
    }

    for (const Book& b : books) {
        if (b.id == id) {
            cout << "Book ID already exists!\n";
            return;
        }
    }

    cout << "Enter Book Title: ";
    getline(cin >> ws, title);

    cout << "Enter Author Name: ";
    getline(cin >> ws, author);

    if (title.empty() || author.empty() ||
        title.find('|') != string::npos ||
        author.find('|') != string::npos) {
        cout << "Invalid book details!\n";
        return;
    }

    books.emplace_back(id, title, author);
    saveBooks(books);

    cout << "Book added successfully!\n";
}

// Display all books
void displayBooks() {
    vector<Book> books = loadBooks();

    if (books.empty()) {
        cout << "No books available.\n";
        return;
    }

    cout << "\n--- Library Books ---\n";

    for (const Book& b : books) {
        cout << "Book ID: " << b.id
             << "\nTitle: " << b.title
             << "\nAuthor: " << b.author
             << "\nStatus: "
             << (b.issued ? "Issued" : "Available")
             << "\n----------------------\n";
    }
}

// Search by title or author
void searchBook() {
    vector<Book> books = loadBooks();
    string keyword;
    bool found = false;

    cout << "Enter title or author to search: ";
    getline(cin >> ws, keyword);

    for (const Book& b : books) {
        if (b.title.find(keyword) != string::npos ||
            b.author.find(keyword) != string::npos) {
            cout << "\nBook ID: " << b.id
                 << "\nTitle: " << b.title
                 << "\nAuthor: " << b.author
                 << "\nStatus: "
                 << (b.issued ? "Issued" : "Available")
                 << "\n";
            found = true;
        }
    }

    if (!found) {
        cout << "Book not found!\n";
    }
}

// Issue a book
void issueBook() {
    vector<Book> books = loadBooks();
    int id;

    cout << "Enter Book ID to issue: ";
    cin >> id;

    for (Book& b : books) {
        if (b.id == id) {
            if (b.issued) {
                cout << "Book is already issued!\n";
                return;
            }

            b.issued = true;
            saveBooks(books);
            cout << "Book issued successfully!\n";
            return;
        }
    }

    cout << "Book not found!\n";
}

// Return a book
void returnBook() {
    vector<Book> books = loadBooks();
    int id;

    cout << "Enter Book ID to return: ";
    cin >> id;

    for (Book& b : books) {
        if (b.id == id) {
            if (!b.issued) {
                cout << "Book was not issued!\n";
                return;
            }

            b.issued = false;
            saveBooks(books);
            cout << "Book returned successfully!\n";
            return;
        }
    }

    cout << "Book not found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Please enter a valid number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 0: cout << "Program closed.\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
