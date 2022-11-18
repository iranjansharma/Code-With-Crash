#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int answer = 0;
    int i = 0;

    // Decimal To Binary

    // while (n != 0)
    // {
    //     int digit = n % 2;

    //     answer = (digit * pow(10, i)) + answer;

    //     n = n >> 1;
    //     i++;
    // }

    // Binary To Decimal
    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 1)
        {
            answer = answer + pow(2, i);
        }
        n = n/10;
        i++;
    }

    cout << "Binary Number is " << answer << endl;
}