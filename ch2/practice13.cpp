#include<iostream>
using namespace std;

int main(){
    cout<<"***** 승리장에 오신 것을 환영합니다. *****"<<endl;
    
    int select;
    int n;

    
    while(true){
        cout<<"짬뽕:1 , 짜짱:2, 군만두:3, 종료:4>>";
        cin>>select;
        if(select == 1){
            cout<<"몇인분?";
            cin>>n;
            cout<<"짬뽕 "<<n<<"인분 나왔습니다"<<endl;
            continue;
        }else if(select == 2){
            cout<<"몇인분?";
            cin>>n;
            cout<<"짜장 "<<n<<"인분 나왔습니다"<<endl;
            continue;
        }else if(select == 3){
            cout<<"몇인분?";
            cin>>n;
            cout<<"짜장 "<<n<<"인분 나왔습니다"<<endl;
            continue;
        }else if(select == 4){
            cout<<"오늘 영업은 끝났습니다."<<endl;
            break;
        }else{
            cout<<"다시 주문하세요!!"<<endl;
            continue;
        }
    }
}