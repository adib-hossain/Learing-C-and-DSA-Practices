#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,-4,5,-15,1,40};
    int size = 8;

    int currSum = 0;
    int MinNum = INT32_MIN;

    for (int i = 0;i < size ; i++){
        currSum += arr[i];
        MinNum = max(currSum,MinNum);
        if (currSum < 0){
            currSum = 0;
            }
    }
    cout << MinNum << endl;

    return 0;
}

