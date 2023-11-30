#include <iostream>
#include <cstring>
#include "head.h"
using namespace std;

class Book : public First_Book {
protected:
    bool is_hard;

public:
    Book(int a, const char* b, const char* c, const char* d, int e, int f, float h, bool k)
        : First_Book(a, b, c, d, e, f, h) {
        is_hard = k;
    }

    void display_info() {
        cout << "ID - " << id << "\n";
        cout << "Name - " << name << "\n";
        cout << "Author - " << author << "\n";
        cout << "Publisher - " << publisher << "\n";
        cout << "Year - " << year << "\n";
        cout << "Pages - " << pages << "\n";
        cout << "Cost - $" << cost << "\n";
        cout << "Is hard - " << is_hard << "\n";
    }

    ~Book() {
        delete[] name;
        delete[] author;
        delete[] publisher;
    }
};

class Audiobook : public First_Book {
private:
    int duration;
    string format;

public:
    Audiobook(int a, const char* b, const char* c, const char* d, int e, int f, float h, int g, const string& i)
        : First_Book(a, b, c, d, e, f, h)
    {
        duration = g;
        format = i;
    }

    void display_info() {
        cout << "ID - " << id << "\n";
        cout << "Name - " << name << "\n";
        cout << "Author - " << author << "\n";
        cout << "Publisher - " << publisher << "\n";
        cout << "Year - " << year << "\n";
        cout << "Pages - " << pages << "\n";
        cout << "Cost - $" << cost << "\n";
        cout << "Duration - " << duration << " minutes\n";
        cout << "Format - " << format << "\n";
    }
};

int main() {
    Book book1(1, "Sample Book 1", "Author 1", "Publisher 1", 2023, 200, 29.99, true);
    Book book2(2, "Sample Book 2", "Author 2", "Publisher 2", 2022, 150, 24.99, false);

    cout << "Information about Book 1:\n";
    book1.display_info();

    cout << "\nInformation about Book 2:\n";
    book2.display_info();

    Audiobook audiobook1(3, "Sample Audiobook 1", "Author 3", "Publisher 3", 2021, 120, 19.99, 90, "MP3");
    Audiobook audiobook2(4, "Sample Audiobook 2", "Author 4", "Publisher 4", 2020, 180, 29.99, 120, "FLAC");

    cout << "\nInformation about Audiobook 1:\n";
    audiobook1.display_info();

    cout << "\nInformation about Audiobook 2:\n";
    audiobook2.display_info();

    return 0;
