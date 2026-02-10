#include <iostream>
using namespace std;

int main(){
    int arr[] = {12,5,4,7,2,3,12,1};
    int size = 8;

    int max_amount = 0;
    int org_start,org_stop;
    int start_index=0,stop_index=size-1;

    while(start_index < stop_index){
        int curr_amount = min(arr[start_index],arr[stop_index])*(stop_index-start_index);
        if (max_amount < curr_amount){
            org_start = start_index;
            org_stop = stop_index;
            max_amount = curr_amount;
        }
        arr[start_index] > arr[stop_index] ? stop_index--:start_index++;
        
    }
    cout << org_start << endl << org_stop;

    // cout << start_index << endl<<stop_index;


    return 0;
}