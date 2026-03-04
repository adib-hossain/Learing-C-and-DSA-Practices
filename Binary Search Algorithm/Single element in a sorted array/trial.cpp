#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int> sorted_array = {1,1,4,4,7,7,10,10,11,12,12};
    int start = 0, end = sorted_array.size()-1 ;

    while (start <= end){
        int mid = start + (end - start)/2;

        if (sorted_array[mid] != sorted_array[mid-1] && sorted_array[mid] != sorted_array[mid+1]){
            cout << sorted_array[mid];
            return sorted_array[mid];
        }

        if(mid%2==0){
            if(sorted_array[mid] == sorted_array[mid-1]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else{
            if(sorted_array[mid] == sorted_array[mid-1]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }

    return 0;
}