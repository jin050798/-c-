#include<iostream>
#include<string>
using namespace std;

bool bigger(int a, int b, int &big){
    if(a>b){
        big = a;
        return false;
    }else if(a<b){
        big = b;
        return false;
    }else{
        return true;
    }
}

int main(){
    int a, b, big;
    cout<<"두 정수를 입력하세요 : ";
    cin>>a>>b;
    if(bigger(a,b,big)==false){
        cout<<"두 정수는 큰 정수는 : "<<big<<endl;
    }


}