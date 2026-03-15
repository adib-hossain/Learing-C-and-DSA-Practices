#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void showArray(vector<int>v){
    for (int item : v){
        cout << item << "  ";
    }
}

int main(void){
    vector<int> nums = {0,1,2,0,0,1,1,2,0,1,0,2};
    showArray(nums);
    cout <<endl;
    int zeros=0,ones=0,twos=0;
    for(int item:nums){
        (item == 0)? zeros++:(item == 1)? ones++ : twos++;
    }
    for(int i=0;i<nums.size();i++){
        if (i<zeros) nums[i] = 0;
        else if (i<zeros+ones) nums[i] = 1;
        else if (i<zeros+ones+twos) nums[i] = 2;
    }

    showArray(nums);
    return 0;
}