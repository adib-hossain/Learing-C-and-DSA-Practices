#include<iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for (int i = 1;i<=n;i++){
        sum += i;
    }
    return sum;
}

int fact(int n){
    int mul = 1;
    for (int i = 1;i<=n;i++){
        mul *= i;
    }
    return mul;
}

int addDigits(int n){
    int temp_n = n;
    int sum = 0;
    while (true){
        sum += temp_n%10;
        temp_n = temp_n/10;
        if (temp_n==0){
            return sum;
        }
    }
}

int main(){

    int input;
    cout << "Enter the num: ";
    cin >> input;

    cout << sum(input) << endl;
    cout << fact(input) << endl;
    cout << addDigits(input) << endl;

    return 0;
}