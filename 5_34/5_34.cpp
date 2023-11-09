#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
    int base, powerRaised, result;

    printf("Enter base number: ");
    cin >> base;

    printf("Enter power number(positive integer): ");
    cin >> powerRaised;

    result = calculatePower(base, powerRaised);
    cout << base << "^" << powerRaised << " = " << result<<"\n";

    return 0;
}

int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base * calculatePower(base, powerRaised - 1));
    else
        return 1;
}