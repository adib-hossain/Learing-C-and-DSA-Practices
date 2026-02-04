#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,2,3,3,4,4};
    
    int ans = 0;

    for (int val : vec) {
        ans^=val;
    }

    cout << ans;

    return 0;
}