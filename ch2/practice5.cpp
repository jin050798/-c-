#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"문자들을 입력하라(100개 미만)."<<endl;
    char a[100];
    cin.getline(a,100);
    int count = 0;

    for(int i = 0; i<100; i++){
        if(a[i]=='\n'){
            break;
        }
        if(a[i] == 'x'){
            count++;
        }

    }
    cout<<"x의 개수는 "<<count<<endl;
}