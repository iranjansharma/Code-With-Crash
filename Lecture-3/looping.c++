#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 2;

    // while (i <= n)
    // {
    //     cout << i << endl;
    //     i = i + 1;
    // }

    // Sum of n Numbers
    int sum = 0;
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i = i + 1;
    // }

    // sum of all even Numbers
    // while(i<=n){
    //     if(i%2==0){
    //         sum = sum + i;
    //     }
    //     i = i + 1;
    // }

    // sum of all even Number 2nd approch
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i = i + 2;
    // }

    //  sum of all of odd Numbers

    while (i <= n)
    {
        if (i % 2 != 0)
        {

            sum = sum + i;
        }
        i = i + 1;
    }
    cout << "Sum is " << sum << endl;
    return 0;
}