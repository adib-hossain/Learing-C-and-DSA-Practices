#include<iostream>
using namespace std;

void arrayShowI(int arr[],int size){
    for (int i=0;i<size;i++){
        cout << arr[i]<< endl;
    }
}

void reverseArray(int arr[],int size){
    int start = 0;
    int end = size-1;

    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void find(int target,int arr[],int size){

    for (int i=0;i<size;i++){
        if (arr[i] == target ){
            cout << "Index : "<< i<<endl;
            return;
        }
    }
    cout << "Index : "<< "-1"<<endl;
}


void min(int arr[],int size){
    int smallest_num = INT32_MAX;

    for (int i = 0;i < size ; i++){
        if (arr[i] < smallest_num){
            smallest_num = arr[i];
        }
    }
    cout << smallest_num << endl;

}


void max(int arr[],int size){
    int largest_num = INT32_MIN;

    for (int i = 0;i < size ; i++){
        if (arr[i] > largest_num){
            largest_num = arr[i];
        }
    }
    cout << largest_num << endl;

}