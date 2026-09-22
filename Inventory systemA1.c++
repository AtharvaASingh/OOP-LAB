#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    string ISBN;
    double price;

public:
    void recordBook()
    {
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter ISBN: ";
        getline(cin, ISBN);

        cout << "Enter Price: ";
        cin >> price;
        cin.ignore();
    }

    void displayBook()
    {
        cout << "\n---- Book Information ----" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book mybook;

    cout << "---- Digital Book Inventory System ----" << endl;

    mybook.recordBook();
    mybook.displayBook();

    return 0;
}
