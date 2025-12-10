
#include <iostream>
using namespace std;

class Book{
private:
    string title;
    string author;
    int yearpublished;
    float price;

public:
    void setBookInfo(string t, string a, int y, float p){
        title = t;
        author = a;
        yearpublished = y;
        price = p;
    }

    void displayBook(){
        cout << "The Book1 title is " << title << endl;
        cout << "The author is " << author << endl;
        cout << "Year published = " << yearpublished << endl;
        cout << "Price =  $" << price << endl;
        cout<<"************************"<<endl;
    }

  string getTitle(){
      return title;
  }
  float getPrice(){
      return price;
  }
};

int main(){
    Book book1,book2;

    book1.setBookInfo("The Hunger Games", "Suzanne Collins", 2008, 15.99);

    book1.displayBook(); 
    book2.setBookInfo("Harry Potter","Rowling",1997,12.50);
    book2.displayBook();
 if(book1.getPrice() > book2.getPrice()){
     cout<<"the most expensive book is:  "<<book1.getTitle();
 }else {
      cout<<"the most expensive book is:  "<<book2.getTitle();

 }
    return 0;
}
