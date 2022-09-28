#include<iostream>
using namespace std;

int main(){
    double a[5];

    cout<<"5 개의 실수를 입력하라>>";

    for(int i =0; i<5; i++){
        cin>>a[i];
    }

    double max=0;

    for(int j = 0; j<5; j++){
        if(a[j]>max){
            max = a[j];
        }
    }
    cout<<"제일 큰 수 = "<<max<<endl;

}