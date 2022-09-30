#include<iostream>
#include<string>
using namespace std;

class Circle{
    int radius;
    string name;
    public:
        void setCircle(string name, int radius);
        double getArea();
        string getName();
};
void Circle::setCircle(string name, int radius){
    this->name = name;
    this->radius = radius;
}
double Circle::getArea(){
    return 3.14*radius*radius;
}
string Circle::getName(){
    return name;
}
class CircleManager{
    Circle *p;
    int size;
    string name;
    int radius;
    int area;

    public:
        CircleManager(int size);
        ~CircleManager(){}
        void serchByName();
        void SerchByArea();
};
CircleManager::CircleManager(int size){
    this->size = size;
    p = new Circle[size];
    for(int i = 0; i<size; i++){
        cout<<"원 "<<i+1<<"의 이름과 반지름 >>";
        cin>>name>>radius;
        p[i].setCircle(name,radius);
    }
}
void CircleManager::serchByName(){
    cout<<"검색하고자 하는 원의 이름 >>";
    cin>>name;
    for(int i =0; i<size; i++){
        if(name == p[i].getName()){
            cout<<name+"의 면적은 "<<p[i].getArea()<<endl;
        }
    }
}
void CircleManager::SerchByArea(){
    cout<<"최소 면적을 정수로 입력하세요 >>";
    cin>>area;
    cout<<area<<"보다 큰 원을 검색합니다."<<endl;
    for(int i = 0; i<size; i++){
        if(area<p[i].getArea()){
            cout<<p[i].getName()<<"의 면적은 "<<p[i].getArea()<<",";
        }
    }
    cout<<endl;

}

int main(){
    int size;
    int area;
    string name;
    cout<<"원의 개수>>"<<endl;
    cin>>size;
    CircleManager manager(size);
    manager.serchByName();
    manager.SerchByArea();

    

}