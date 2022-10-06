#include<iostream>
using namespace std;

class Circle{
    int radius;
    public:
        Circle(){
            radius = 1;
        }
        double getArea(){
            return 3.14*radius*radius;
        }
        void setRadius(int radius){
            this->radius = radius;
        }
};

void swap(Circle& c1, Circle& c2){
    Circle temp;
    temp = c1;
    c1 = c2;
    c2 = temp;
}

int main(){
    Circle pizza;
    Circle donut;
    pizza.setRadius(3);
    donut.setRadius(5);
    cout<<"swap 하기 전"<<endl;
    cout<<"(pizza : "<<pizza.getArea()<<", donut : "<<donut.getArea()<<")"<<endl;
    cout<<"swap 한 후"<<endl;
    swap(pizza,donut);
    cout<<"(pizza : "<<pizza.getArea()<<", donut : "<<donut.getArea()<<")"<<endl;


}