#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i = 1;i<n;i++){
        int curr = arr[i];
        int target = i;
        for(int j = i-1;j>=0 && arr[j]>curr;j--){
                arr[j+1] = arr[j];
                target = j;
        }
        arr[target] = curr;
    }
}

void showArray(int arr[],int n){
    for(int i = 0 ; i< n;i++){
        cout << arr[i] << " ";
    }
}

int main(void){
    int arr[] = {2,4,3,4,11,8,7};
    int n = sizeof(arr)/4;

    insertionSort(arr,n);
    showArray(arr,n);

    return 0;
}
