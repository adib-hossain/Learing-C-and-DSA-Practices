#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void showArray(int arr[],int n){
    for(int i = 0 ; i< n;i++){
        cout << arr[i] << " ";
    }
}

int main(void){
    int arr[] = {2,4,3,4,8,7};
    int n = sizeof(arr)/4;

    bubbleSort(arr,n);
    showArray(arr,n);

    return 0;
}
