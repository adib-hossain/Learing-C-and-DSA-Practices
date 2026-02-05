#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,5,4,7,2,3,1};
    int size = 7;

    int target;
    cin >> target;

    for (int i = 0;i<size;i++){
        int curSum;
        for (int j = (i+1); j<size ; j++){
            curSum = arr[i] + arr[j];
            if (curSum == target){
                cout << i << " "<< j<< endl;
                return 0;
            }
        }
    }
    cout << "No such pair was found."<< endl;

    return 0;
}