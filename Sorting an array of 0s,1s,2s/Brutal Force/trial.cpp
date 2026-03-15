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
    sort(nums.begin(),nums.end());

    showArray(nums);
    return 0;
}