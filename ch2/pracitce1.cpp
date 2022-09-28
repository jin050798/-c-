#include<iostream>
using namespace std;

int main(){
    int i = 1;
    for(int n = 1; n<=100; n++){
        cout<<n<<"\t";
        if(n%10 == 0){
            cout<<endl;
        }

    }
}