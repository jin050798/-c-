#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    cout<<"문자열 입력>>";
    char s[100];
    cin>>s;
    int l = strlen(s);
    for(int i = 0; i<l; i++){
        for(int j = 0; j<i+1; j++){
            cout<<s[j];
        }
        cout<<endl;
    }

}