//
// Created by Raximberdi on 15/11/2023.
//

#include <iostream>
using namespace std;
#include <vector>
#include <string>

struct Book {
    string title;
    Book(string t) : title(std::move(t)) {}
};
void swapBooks(Book& book1, Book& book2) {
    Book temp = book1;
    book1 = book2;
    book2 = temp;
}
void bubbleSort(vector<Book>& books) {
    int n = books.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (books[j].title > books[j + 1].title) {
                swapBooks(books[j], books[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<Book> books = {
        Book("Harry Potter"),
        Book("Lord of the Rings"),
        Book("The Great Gatsby"),
        Book("To Kill a Mockingbird"),
        Book("1984")
    };
    cout << "Unsorted list of books:" << std::endl;
    for (const auto& book : books) {
        cout << book.title << std::endl;
    }
    bubbleSort(books);
    cout << "\nSorted list of books:" << std::endl;
    for (const auto& book : books) {
        cout << book.title << std::endl;
    }

    return 0;
}
