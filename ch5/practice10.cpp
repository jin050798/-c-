#include<iostream>
#include<string>
using namespace std;

class Buffer{
    string text;
    public:
        Buffer(string text){this->text = text;}
        void add(string next){text +=next;}
        void print(){cout<<text<<endl;}
};
Buffer& append(Buffer& a, string text)
{
	a.add(text); //여기까지는 buf객체에 Guys를 추가하기만 한 동작
	return a;  // &temp가 a를 참조하기 위해 반환함
}


int main(){
    Buffer buf("Hello");
    Buffer& temp = append(buf,"Guys");
    temp.print();
    buf.print();
}