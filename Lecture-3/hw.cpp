#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch > 97 && ch < 122)
    {
        cout << "Lowercase" << endl;
    }
    else if (ch > 65 && ch < 90)
    {
        cout << "Uppercase" << endl;
    }
    else
    {
        cout << "This is A number" << endl;
    }
}