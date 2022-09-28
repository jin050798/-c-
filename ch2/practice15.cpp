#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100];
    char space[] = " ";
    char *b;

    while (true)
    {
        cout << "?" << endl;
        cin.getline(a, 100, '\n');
        b = strtok(a, space);
        int c = atoi(b);
        b = strtok(NULL, space);
        char *q = b;
        b = strtok(NULL, space);
        int d = atoi(b);

        int result;

        if (*q == '+')
        {
            result = c + d;
            cout << c << " + " << d << " = " << result << endl;
        }
        else if (*q == '-')
        {
            result = c - d;
            cout << c << " - " << d << " = " << result << endl;
        }
        else if (*q == '*')
        {
            result = c * d;
            cout << c << " * " << d << " = " << result << endl;
        }
        else if (*q == '/')
        {
            result = c / d;
            cout << c << " / " << d << " = " << result << endl;
        }
        else if (*q == '%')
        {
            result = c % d;
            cout << c << " % " << d << " = " << result << endl;
        }
    }
}