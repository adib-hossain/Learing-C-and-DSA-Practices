#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;

    for (int str = 0;str < size ; str++){
        for (int end = str;end < size; end++){
            for (int i = str;i <=end;i++){
                cout << arr[i] ;
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}