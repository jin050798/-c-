#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"새 암호를 입력하세요>>";
    string psw;
    cin>>psw;
    cout<<"새 암호를 다시 한 번 입력하세요>>";
    string psw2;
    cin>>psw2;
    if(psw == psw2){
        cout<<"같습니다"<<endl;
    }else{
        cout<<"다릅니다"<<endl;
    }

}