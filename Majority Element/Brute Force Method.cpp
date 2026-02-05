#include<iostream>
using namespace std;

int checkFreq(int item,int arr[],int size){
        int freq = 0;
        for (int i = 0; i<size;i++){
            if (arr[i]==item)
                freq++;
        }
        return freq;
    }

int main(){
    int arr[] = {1,5,5,6,5,4,8,7,2,5,5};
    int size = sizeof(arr)/4;

    int half_size = size/2;

    for (int i = 0; i<size ;i++ ){
        int freq = checkFreq(arr[i],arr,size);
        if (freq > half_size){
            cout << arr[i] << endl;
            return 0;
        }          
    }
    cout << "No majority"<<endl;
    return 0;
}