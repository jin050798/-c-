#include<iostream>
#include<string>
using namespace std;

int main(){

    while(true){
        cout<<"아래에 한 줄을 입력하세요.(exit)을 입력하면 종료합니다)"<<endl;
        string s;
        getline(cin,s,'\n');
        if(s == "exit"){
            break;
        }
        srand((unsigned)time(0));
        int n = rand() % s.size();
        int alp = rand() % 26;
        char ranc = 65 + alp;
        s[n] = ranc;

        cout<<">>"<<s<<endl;

    }

    return 0;    

}