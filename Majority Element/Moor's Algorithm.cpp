#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,4,4,2,5,5,5,5,5,5};

    int freq = 0;
    int ans = 0;
    for (int i = 0 ; i<vec.size() ;i++){
        if (freq == 0){
            ans = vec[i];
        }
        if (vec[i]==ans){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout << ans << endl;
    return 0;
}