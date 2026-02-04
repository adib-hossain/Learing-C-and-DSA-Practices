#include<iostream>
using namespace std;

void arrayShowI(int arr[],int size){
    for (int i=0;i<size;i++){
        cout << arr[i]<< endl;
    }
}

void swapMaxMin(int arr[],int size){
    int smallest_num = INT32_MAX;
    int largest_num = INT32_MIN;
    int s_index,l_index =-1;

    for (int i = 0;i < size ; i++){
        if (arr[i] < smallest_num){
            smallest_num = arr[i];
            s_index = i;
        }
        if (arr[i] > largest_num){
            largest_num = arr[i];
            l_index = i;
        }
    }
    swap(arr[l_index],arr[s_index]);

}

int main(){
    int numbers[]={10,7,5,3,7,8};
    int size = sizeof(numbers)/4;

    arrayShowI(numbers,size);
    cout << endl<<endl;
    swapMaxMin(numbers,size);
    arrayShowI(numbers,size);




    return 0;
}