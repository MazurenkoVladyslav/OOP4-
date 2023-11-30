#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

class First_Book {
protected:
    int id;
    char* name;
    char* author;
    char* publisher;
    int year;
    int pages;
    float cost;

public:
    First_Book(int a, const char* b, const char* c, const char* d, int e, int f, float h) {
        id = a;
        name = new char[strlen(b) + 1];
        strcpy(name, b);
        author = new char[strlen(c) + 1];
        strcpy(author, c);
        publisher = new char[strlen(d) + 1];
        strcpy(publisher, d);
        year = e;
        pages = f;
        cost = h;
    }
    ~First_Book() {
    }

};

#endif // HEAD_H_INCLUDED

