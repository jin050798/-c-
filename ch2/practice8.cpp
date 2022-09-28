#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    cout<<"5 명의 이름을 ';'으로 구분하여 입력하세요";
    string names[5];
    int longname = 0;
    string longnames;
    for(int i =0; i<5; i++){
        char name[100];
        cin.getline(name,100,';');
        if(strlen(name)>longname){
            longname = strlen(name);
            longnames = name;
        }
        cout<<i+1<<" : "<<name<<endl;
    }
    cout<<"가장 긴 이름은 "<<longnames<<endl;
}