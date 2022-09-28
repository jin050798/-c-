#include<iostream>
#include<string>
using namespace std;

class Person{
    string name;
    public:
        Person(){}
        Person(string name){this->name = name;}
        void setName(string name){this->name = name;}
        string getName(){return name;}

};

class Family{
    Person *p;
    int size;
    public:
        Family(string name,int size);
        void setName(int index, string name);
        void show();
        ~Family(){}
};
Family::Family(string name,int size){
    this->size = size;
    p = new Person[size];
}
void Family::setName(int index, string name){
    p[index].setName(name);
}
void Family::show(){
    cout<<"Simpson 가족은 다음과 같이 "<<size<<"입니다"<<endl;
    for(int i = 1; i<=size;i++){
        cout<<p[i-1].getName()<<"    ";
    }
    cout<<endl;
}

int main(){
    Family *simpson = new Family("Simpson",3);
    simpson->setName(0,"Mr.Simpson");
    simpson->setName(1,"Mrs.Simpson");
    simpson->setName(2,"Bart Simpson");

    simpson->show();
    delete simpson;
}