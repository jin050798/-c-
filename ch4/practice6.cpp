#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "아래에 한 줄을 입력하세요.(exit)을 입력하면 종료합니다)" << endl;
    while (true)
    {
        string s;
        cout << ">>";
        getline(cin, s, '\n');
        if (s == "exit")
        {
            break;
        }

        string temp = s;

        for (int i = 0; i < s.size(); i++)
        {
            s[i] = temp[s.size() - 1 - i];
        }
        for (int j = 0; j < temp.size(); j++)
        {
            cout << s[j];
        }
        cout << endl;
    }
}