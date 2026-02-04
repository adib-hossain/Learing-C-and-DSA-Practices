#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 5;

    //Arithmatic
    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << a * b << "\n";
    cout << a / b << "\n";

    //Relational
    cout << (a > b) << "\n";
    cout << (a < b) << "\n";

    //Unary 
    cout << a++ << "\n";
    cout << a << "\n";
    cout << --b << "\n";

    return 0;
}