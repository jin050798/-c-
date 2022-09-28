#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i<=9; i++){
        for(int j = 1; j<=9; j++){
            int mul = i * j;
            cout<<j<<"X"<<i<<"="<<mul<<"\t";
        }
        cout<<endl;
    }
}