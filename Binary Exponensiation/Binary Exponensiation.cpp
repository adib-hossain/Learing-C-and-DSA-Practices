#include<iostream>
using namespace std;

int main(){
    int n = 3;
    double x = 5;

    double ans = 1;

    while (n>0){
        if (n%2==1){
            ans *= x;
        }
        x *= x;
        n /= 2;
    }

    cout << ans << endl;
    
    return 0;
}