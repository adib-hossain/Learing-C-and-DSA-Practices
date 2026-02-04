#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int start = 0;
    int end = size-1;

    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void arrayShowI(int arr[],int size){
    for (int i=0;i<size;i++){
        cout << arr[i]<< endl;
    }
}

int main(){
    int marks[] = {99,75,84,65,94,4};
    int size = sizeof(marks) / 4;

    reverseArray(marks,size);
    arrayShowI(marks,size);
    

    return 0;
}