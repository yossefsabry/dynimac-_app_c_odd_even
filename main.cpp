#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int Even_odd(long long num, int length_number)
{
    for (int i = 1; i < length_number; i++)
    {
        num /= 10;
    };
    num = floor(num);
    return num;
}

int main()
{
    long long number = 943850924389852;
    string int_string = to_string(number);

    int result = Even_odd(number, int_string.length());
    if (result % 2 == 0)
    {
        cout << "Even: " << result << endl;
    }
    else
    {
        cout << "Odd: " << result << endl;
    }
    return 0;
}
