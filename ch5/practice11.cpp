#include<iostream>
#include<cstring>
using namespace std;

class Book{
    char *title;
    int price;
    public:
        Book(const char * title, int price){
            int len = strlen(title);
            this->title = new char[len];
            strcpy(this->title, title);
            this->price = price;
        }
        Book(Book& p){
            this->price = p.price;
            int len = strlen(p.title);
            this->title = new char[len+1];
            strcpy(this->title , p.title);
            
        }
        ~Book(){delete[] title;}
        void set(char * title, int price){
            this->price = price;
            this->title = title;
            
        };
        void show(){ cout<<title << ' ' <<price<<"원"<<endl;}
};

int main(){
    Book cpp("명품c++",10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}