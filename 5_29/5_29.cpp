// 5_29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int a, b, max_num;
    printf_s("number1: ");
    scanf_s("%d", &a);
    printf_s("number2: ");
    scanf_s("%d", &b);
    max_num = max(a, b);
    while (1)
    {
        if (max_num % a == 0 && max_num % b == 0)
        {
            cout << "The LCM of " << a << " and " << b << " = " << max_num << endl;
            break;
        }
        ++max_num;
    }

    return 0;
}