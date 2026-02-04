#include<iostream>
using namespace std;

void arrayShowI(int arr[],int size){
    for (int i=0;i<size;i++){
        cout << arr[i]<< endl;
    }
}



int main(){
    int marks[10] = {99,75,84,65,94}; //creating an array
    int Prices[] = {909,705,84,615,944,454}; //creating an array with auto assigning size

    cout << marks[2]<< endl;
    cout << sizeof(Prices) << endl;
    cout << sizeof(marks)<<endl; //

    cout << "\n";

    // printing all values of an array
    int size = sizeof(Prices)/4;
    arrayShowI(Prices,size);



    return 0;
}