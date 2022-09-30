#include <iostream>
#include <string>
using namespace std;

class Player
{
    string name[2];

public:
    void setName(string name1, string name2);
    string getName1();
    string getName2();
};
void Player::setName(string name1, string name2)
{
    name[0] = name1;
    name[1] = name2;
}
string Player::getName1()
{
    return name[0];
}
string Player::getName2()
{
    return name[1];
}

class GamblingGame
{
    Player *p;

public:
    GamblingGame();
    GamblingGame(string name1, string name2);
    void startGame();
};
GamblingGame::GamblingGame(string name1, string name2)
{
    p = new Player;
    p->setName(name1, name2);
}
void GamblingGame::startGame()
{
    int count = 0;
    

    while (true)
    {
        if (count % 2 == 0)
        {
            int num[3];
            cout << p->getName1() + ":<Enter>";
            cin.get();
            
            for (int i = 0; i < 3; i++)
            {
                int rand_num = rand() % 3;
                cout << rand_num << "     ";
                num[i] = rand_num;
                
            }
            count++;
            if(num[0]==num[1]&&num[0]==num[2]){
                cout<<p->getName1()+"님 승리!!"<<endl;
                break;
            }else{
                cout<<"아쉽군요!"<<endl;
            }
            cout << endl;
        }
        else
        {
            int num[3];
            cout << p->getName2() + ":<Enter>";
            cin.get();
            for (int i = 0; i < 3; i++)
            {
                int rand_num = rand() % 3;
                cout << rand_num << "     ";
                num[i] = rand_num;
            }
            count++;
            if(num[0]==num[1]&&num[0]==num[2]){
                cout<<p->getName2()+"님 승리!!"<<endl;
                break;
            }else{
                cout<<"아쉽군요!"<<endl;
            }
            cout << endl;
        }
    }
}

int main()
{
    string name1, name2;
    cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
    cout << "첫번째 선수 이름>>";
    cin >> name1;
    cout << "두번째 선수 이름>>";
    cin >> name2;
    GamblingGame game(name1, name2);
    game.startGame();
}