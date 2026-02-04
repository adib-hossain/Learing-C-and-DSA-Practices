#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1 = {1,2,3}; 
    cout << vec1[0] << endl;
    cout << vec1[1] << endl;
    cout << vec1[2] << endl;

    cout << endl;

    //another way of printing all element of a vector
    for (int i : vec1) {
        cout << i << endl;
    } 

    cout << endl;

    vector<int> vec2(4,2); // size 4 with default value 2 
    for (int i : vec2) {
        cout << i << endl;
    } 

    cout << endl;

    //Basic functions on vector
    vector<int> vec = {10,20,10,45};

    cout << vec.size() << endl;
    vec.push_back(88);
    
    cout << endl;
    for (int i : vec){
        cout << i << endl;
    }

    vec.pop_back();

    cout << endl;
    for (int i : vec){
        cout << i << endl;
    }

    cout << endl;

    cout << vec.front() << endl;
    cout << vec.back()<< endl;
    cout << vec.at(1) << endl;

    return 0;
}