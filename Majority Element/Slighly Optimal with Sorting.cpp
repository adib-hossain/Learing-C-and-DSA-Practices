#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,4,4,2,5,5,5,5,5,5};

    //sorting
    sort(vec.begin(),vec.end());

    //checking for duplicate
    int size = vec.size();
    int duplicate_num = 1;
    int item = vec[0];

    for (int i = 1; i<size ;i++){
        if (vec[i]==item){
            duplicate_num++;
        }
        else{
            item = vec[i];
            duplicate_num = 1;
        }    
        if (duplicate_num > (size/2)){
                cout << item;
                return 0;
        }
    }
    cout << "No majority"<< endl;

    return 0;
}