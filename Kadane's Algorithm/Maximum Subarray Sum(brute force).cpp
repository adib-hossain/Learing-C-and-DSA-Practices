#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,-4,5,-15,1,40};
    int size = 8;

    int maxSum = INT32_MIN;
    for (int str = 0;str < size ; str++){
        int currSum = 0;
        for (int end = str;end < size; end++){
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout << maxSum << endl;
    return 0;
}

