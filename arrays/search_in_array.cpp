#include<iostream>
using namespace std;

//Example of linear search
void find(int target,int arr[],int size){

    for (int i=0;i<size;i++){
        if (arr[i] == target ){
            cout << "Index : "<< i<<endl;
            return;
        }
    }
    cout << "Index : "<< "-1"<<endl;
}



int main(){
    int marks[] = {99,75,84,65,94,4};
    int size = sizeof(marks) / 4;

    find(10000,marks,size);



    return 0;
}