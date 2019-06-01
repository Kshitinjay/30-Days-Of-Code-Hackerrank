#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here
class MyBook : public Book {
  public:
    MyBook(
        string t,
        string a,
        int p
    ) :
        Book(t,a),
        price(p)
    {
        
    }
    
    virtual
    void
    display(
        void
    ) override {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
    
  private:
    int price;
};
// End class

int main() {