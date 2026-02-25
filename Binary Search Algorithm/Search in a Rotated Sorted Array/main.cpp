#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int> arr = {8,9,10,1,3,4,5,6,7};
    int size = arr.size()-1;
    int st = 0,end = size, mid ,tar = 3;

    while (st <= end){
        mid = st + ((end - st)/2);

        if (arr[mid]==tar){
            cout << mid << endl;
            return 0;
        }

        if (arr[st] <= arr[mid]){ // left sorted
            if (arr[st] <= tar && arr[mid] > tar){ //Does exist in the left ,so shift left
                end = mid - 1;
            }
            else{ // Doesnt exist in the left , so shift right
                st = mid + 1;
            }
        }
        else{ // Right sorted
            if (arr[mid] <= tar && arr[end] >= tar){ // exist in this portion
                st = mid + 1 ;
            }
            else{
                end = mid - 1 ;
            }
        }
    }
    cout << "Not found" << endl;

    return -1;
}