#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int> mountain = {1,3,7,9,11,6,2}; 
    int st_in = 1,en_in = mountain.size() -2;

    while (st_in <= en_in){
        int mid_in = (en_in+st_in)/2;
        if (mountain[mid_in] > mountain[mid_in-1] && mountain[mid_in] > mountain[mid_in+1]) {
            cout << mid_in;
            return mid_in;
        }
        else if (mountain[mid_in] > mountain[mid_in-1]){
            st_in = mid_in + 1;
        }
        else{
            en_in = mid_in - 1;
        }
    }

    return -1;
}