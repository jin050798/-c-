#include<iostream>
using namespace std;

int main(){
    cout<<"영문 텍스트를 입력하세요. 히스토그램을 그립니다."<<endl;
    cout<<"텍스트의 끝은 ; 입니다. 10000개까지 가능합니다."<<endl;
    char c[10000];
    cin.getline(c,10000,';');
    int alp[26] = { 0,};
    cout<<alp[0]<<endl;
}