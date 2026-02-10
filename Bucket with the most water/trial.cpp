#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,5,4,7,2,3,1,12};
    int size = 8;

    int max_amount = 0;
    int start_index,stop_index;

    for (int i = 0;i<size;i++){
        for (int j = i+1; j<size; j++){
            int curr_amount = min(arr[i],arr[j])*(j-i);
            if (max_amount < curr_amount){
                max_amount = curr_amount;
                start_index = i;
                stop_index = j;
            }
        } 
    }
    cout << start_index << endl<<stop_index;


    return 0;
}