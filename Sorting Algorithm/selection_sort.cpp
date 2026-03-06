#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int smallest_num = i;
        for(int j = i;j<n;j++){
            if(arr[j]<arr[smallest_num]){
                smallest_num = j;
            }
        }
        swap(arr[i],arr[smallest_num]);
    }
}

void showArray(int arr[],int n){
    for(int i = 0 ; i< n;i++){
        cout << arr[i] << " ";
    }
}

int main(void){
    int arr[] = {2,4,3,4,8,11,7};
    int n = sizeof(arr)/4;

    selectionSort(arr,n);
    showArray(arr,n);

    return 0;
}
