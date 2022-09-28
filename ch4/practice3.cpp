#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"문자열 입력>>";
    string s;
    getline(cin,s,'\n');
    int acount1 = 0;

    for(int i = 0; i<s.size(); i++){
        if(s[i]=='a'){
            acount1++;

        }
    }
    cout<<"문자 a 는 "<<acount1<<"개 있습니다."<<endl;

    int acount2 = 0;
    int index = 0;
    int find = 0;

    while(true){
        find = s.find('a',index+1);
        if(find == -1){
            break;
        }else{
            acount2++;
        }
        index = find;
    }
    cout<<"문자 a 는 "<<acount2<<"개 있습니다."<<endl;

}