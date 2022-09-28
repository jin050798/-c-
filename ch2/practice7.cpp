#include<iostream>
using namespace std;

int main(){
    
    char a[100];
    while(true){
        cout<<"종료하고싶으면 yes를 입력하세요>>";
        cin.getline(a,100);
        if(a[0]=='y'&&a[1]=='e'&&a[2]=='s'){
            cout<<"종료합니다. . .";
            break;
        }
    }
    return 0;
}