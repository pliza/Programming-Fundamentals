
#include <iostream>
#include <vector>
#include <string>
#include <cctype> // isdigit
using namespace std;

int main()
{
    string input;
    cout << "введіть строку ";
    cin >> input;
    bool flag = true;
    int flag2 = 0;
    for (int i = 0; i < input.size(); i++)
    {
        if (isdigit(input[i]))
        {
            continue;
        }
        else if (i >= 1 && i <= input.size() - 4)
        {
            if (input[i] == '*' && input[i + 1] == '/' && input[i + 2] == '*')
            {
                flag2++;
                i += 2;
                continue;
            }
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag && flag2 == 1)
    {
        cout << "Входить";
    }
    else
    {
        cout << "Не входить";
    }
}
