#include<iostream>
using namespace std;

void sum(int arr[],int size){
    int sum = 0;
    for (int i=0;i<size;i++){
        sum += arr[i];
    }
    cout << "The Sum is "<< sum << endl;
}

void product(int arr[],int size){
    long int sum = 1;
    for (int i=0;i<size;i++){
        sum *= arr[i];
    }
    cout << "The Product is "<< sum << endl;
}



int main(){
    int numbers[]={10,7,5,3,7,8};
    int size = sizeof(numbers)/4;

    sum(numbers,size);
    product(numbers,size);



    return 0;
}