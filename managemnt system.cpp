#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
public:
    int id;
    string title;
    string author;

    Book(int id, string title, string author) : id(id), title(title), author(author) {}
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(int id, string title, string author) {
        books.push_back(Book(id, title, author));
        cout << "Book added successfully!" << endl;
    }

    void displayBooks() {
        if (books.empty()) {
            cout << "No books in the library." << endl;
        } else {
            for (const auto &book : books) {
                cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << endl;
            }
        }
    }

    void searchBookByTitle(string title) {
        bool found = false;
        for (const auto &book : books) {
            if (book.title == title) {
                cout << "Book found! ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "No book found with the title: " << title << endl;
        }
    }

    void searchBookByAuthor(string author) {
        bool found = false;
        for (const auto &book : books) {
            if (book.author == author) {
                cout << "Book found! ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No books found by the author: " << author << endl;
        }
    }
};

int main() {
    Library library;
    int choice, id;
    string title, author;

    while (true) {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n2. Display All Books\n3. Search Book by Title\n4. Search Book by Author\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter book ID: ";
                cin >> id;
                cin.ignore(); // to ignore the newline character left in the buffer
                cout << "Enter book title: ";
                getline(cin, title);
                cout << "Enter author name: ";
                getline(cin, author);
                library.addBook(id, title, author);
                break;

            case 2:
                library.displayBooks();
                break;

            case 3:
                cin.ignore();
                cout << "Enter book title to search: ";
                getline(cin, title);
                library.searchBookByTitle(title);
                break;

            case 4:
                cin.ignore();
                cout << "Enter author name to search: ";
                getline(cin, author);
                library.searchBookByAuthor(author);
                break;

            case 5:
                cout << "Exiting the system. Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
