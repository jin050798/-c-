#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Histogram{
    string str1;
    char c;
    public:
        Histogram(string s);
        void put(string s);
        void putc(char c);
        void print();
};
Histogram::Histogram(string s){
    str1 = s;
}
void Histogram::put(string s){
    str1 = str1 +  s;
}
void Histogram::putc(char c){

    str1.push_back(c);

}
void Histogram::print(){
    cout<<str1<<endl;
    int count = 0;
    int alp_num[26] = {0,};
    for(int i = 0; i<str1.size(); i++){
        if((str1[i]>=65 && str1[i]<=90) || (str1[i]>=97 && str1[i]<=122)){
            count = count + 1;
        }
    }
    cout<<endl;
    cout<<"총 알파벳 수 "<<count<<endl;
    cout<<endl;

    for(int i = 0; i<str1.size(); i++){
        if(str1[i]>=65 && str1[i]<=90){
            str1[i]= str1[i] + 32;
        }
        if(str1[i]>=97 && str1[i]<=122){
            str1[i] = str1[i]-97;
            alp_num[str1[i]]++;
        }
        
    }
    for(int i = 0; i<26; i++){
        cout<<char(i+97)<<"("<<alp_num[i]<<")   : ";
        for(int j = 0; j<alp_num[i]; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

int main(){
    Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("Elvis Presley");
    elvisHisto.print();
}