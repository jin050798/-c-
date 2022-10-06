#include<iostream>
#include<string>
using namespace std;

class MyIntStack{
    int *p;
    int size;
    int tos;
    public:
        MyIntStack(){tos = 0;}
        MyIntStack(int size){
            tos = 0;
            this->size = size;
        }
        MyIntStack(const MyIntStack& s){
            tos = s.tos;
            this->size = s.size;
        }
        ~MyIntStack(){}
        bool push(int n);
        bool pop(int &n);
};

bool MyIntStack::push(int n){
    if(tos>size){
        return false;
    }else{
        p[tos]= n;
        tos++;
        return true;
    }

}
bool MyIntStack::pop(int &n){
    if(tos<1){
        return false;
    }else{
        tos--;
        n = p[tos];  
        return true;
    }
}

int main(){
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;
    b.push(30);
    a.push(40);

    int n;
    a.pop(n);
    cout<<"스택 a에서 팝한 값 "<<n<<endl;
    b.pop(n);
    cout<<"스택 b에서 팝한 값 "<<n<<endl;
}