#include<iostream>
using namespace std;

int main(){
    cout<<"정수 5개 입력>>";
    int *a = new int[5];
    int sum = 0;
    for(int i = 0; i<5; i++){
        cin>>a[i];
        sum = sum + a[i];

    }
    double avg;
    avg = (double)sum / 5.0;
    cout<<"평균 "<<avg<<endl;

    delete []a;
}