#include <iostream>
using namespace std;

int main()
{
    int num;

    cin >> num;

    if (num < 0)
    {
        cout << "Negetive\n";
    }
    else
    {
        cout << "Positve\n";
    }

    int checkNum;

    cout << "Enter another num for checking ODD or EVEN :";
    cin >> checkNum;

    cout << ((checkNum % 2 == 0)? "Even":"Odd");

    return 0;
}