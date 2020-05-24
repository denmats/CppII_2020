#include <iostream>

using namespace std;

class Book
{
    string isbn;
    string author;
    string title;
    string genre;
    string publisher;
    int year;
    double price;

    Book(){}

    Book(string i, string a, string t, string g, string p, int y, double p)
    {
        isbn = i;
        author = a;
        title = t;
        genre = g;
        publisher = p;
        year = y;
        price = p;
    }
};

int main()
{

    return 0;
}
