#include<iostream>
using namespace std;

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

int main(){
    int size = 6;
    int marks[size] = {99,75,84,65,94,4};

    min(marks,size);
    max(marks,size);

    
    // int smallest_num = INT32_MAX;
    // int largest_num = INT32_MIN;

    // for (int i = 0;i < size ; i++){
    //     if (marks[i] < smallest_num){
    //         smallest_num = marks[i];
    //     }
    //     if (marks[i] > largest_num){
    //         largest_num = marks[i];
    //     }
    // }
    // cout << smallest_num << "  and  " << largest_num << endl;

    return 0;
}