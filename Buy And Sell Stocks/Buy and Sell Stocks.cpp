#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> prices= {7,1,5,4,9,3,4};
    int size = prices.size();

    int bestBuy = INT32_MAX;
    int maxProf = 0;
    int bestSell = 0;

    for (int i = 0;i<size;i++){ 
        if (prices[i]<bestBuy){
            bestBuy = prices[i];
        }
        else{
            maxProf = max(maxProf,prices[i]-bestBuy);
        }
    }
    bestSell = bestBuy+maxProf;

    cout << bestBuy <<"--"<<bestSell<<"--"<<maxProf<<endl;


    return 0;
}