#include <iostream>
#include <string>
using namespace std;

class Book{
    private:
    string title;
    string author;
    int pages;

    public:
    Book(string title, string author, int pages){
        this -> title = title;
        this -> author = author;
        this -> pages = pages;
    }
    
    void display(){
        cout << "Book Title: " << title << endl;
        cout << "Book Author: " << author << endl;
        cout << "Book Pages: " << pages << endl;
        cout << endl;
    }
};

int main(){
    Book member1 = Book("Hello World!", "David", 100);
    Book member2 = Book("Hello Guy!", "John", 200);

    member1.display();
    member2.display();
    return 0;
}