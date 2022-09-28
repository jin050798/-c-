#include <iostream>
#include <string>
using namespace std;

class Container
{
    int size;

public:
    Container() { size = 10; }
    void fill() { size = 10; }
    void consume() { size = size - 1; }
    int getSize() { return size; }
};

class CoffeeVendignMachin
{
    Container tong[3];
    void fill()
    {
        for (int i = 0; i < 3; i++)
        {
            tong[i].fill();
        }
    }
    void selectEspresso()
    {
        tong[0].consume();
        tong[1].consume();
    }
    void selectAmericano()
    {
        tong[0].consume();
        tong[1].consume();
        tong[1].consume();
    }
    void selectSugarCoffee()
    {
        tong[0].consume();
        tong[1].consume();
        tong[1].consume();
        tong[2].consume();
    }
    void show()
    {
        cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
    }

public:
    void run()
    {
        cout << "**********커피 자판기를 작동합니다**********" << endl;
        int selectnum;

        while (true)
        {
            cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
            cin >> selectnum;
            if (selectnum == 1)
            {
                cout << "에스프레소를 드세요" << endl;
                selectEspresso();
            }else if(selectnum == 2){
                cout<<"아메리카노를 드세요"<<endl;
                selectAmericano();
            }else if(selectnum ==3){
                cout<<"설탕커피를 드세요"<<endl;
                selectSugarCoffee();
            }else if(selectnum == 4){
                show();
            }else if(selectnum == 5){
                fill();
                show();
            }
        }
    }
};

int main()
{
    CoffeeVendignMachin coffee;
    coffee.run();
}