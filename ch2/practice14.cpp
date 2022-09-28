#include<iostream>
using namespace std;

int main(){
    cout<<"에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다."<<endl;
    string coffee;
    int sum = 0;
    int revenue;
    int money;
    while(true){
        cout<<"주문>>";
        cin>>coffee>>money;
        if(coffee == "에스프레소"){
            revenue = 2000 * money;
            sum = sum+revenue;
            if(sum>20000){
                break;
            }
            cout<<revenue<<"입니다. 맛있게 드세요"<<endl;
            continue;
        }else if(coffee=="아메리카노"){
            revenue = 2300 * money;
            sum = sum + revenue;
            if(sum>20000){
                break;
            }
            cout<<revenue<<"입니다. 맛있게 드세요"<<endl;
            continue;
        }else if(coffee=="카푸치노"){
            revenue = 2500 * money;
            sum = sum + revenue;
            if(sum>20000){
                break;
            }
            cout<<revenue<<"입니다. 맛있게 드세요"<<endl;
            continue;
        }
    }
    cout<<"오늘 "<<sum<<"원을 판매하여 카페를 닫습니다. 내일 봐요~~"<<endl;
    return 0;

}