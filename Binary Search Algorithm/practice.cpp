// This is not the actual binary search.This is my version of it.


#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int>num ={1,2,3,4,5,6,7,8,9,10,15,48};
    size_t size = num.size(); 

    int search_object = 4,start_index,last_index, mid_index = size/2;

    if (num[mid_index]==search_object){
        cout << "Object found at index : " << mid_index << endl;  
    }
    else if (num[mid_index]>search_object){
        start_index = 0;
        last_index = mid_index-1;
    }
    else if (num[mid_index]>search_object){
        start_index = mid_index+1;
        last_index = size - 1;
    }
    for(int i = start_index;i<=last_index;i++){
        if (search_object==num[i]){
            cout << "Object found at index : " << i << endl;
            return 0;
        }
    }
    cout << "Object was not found" << endl;

    return 0;
}