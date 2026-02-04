#include <iostream>
using namespace std;

int main(){

    char a_char = 'A';
    int value = a_char;//Is possible cause int size is bigger than char size.So , type casting done automatically.

    double big_num = 100.99;
    int num = (int)big_num; // Force type casting from big to small datatype(Size).

    cout << value<<"\n";
    cout << num;

    return 0;
}