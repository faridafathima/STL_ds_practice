#include<iostream>
#include<vector>
using namespace std;

int reverseTheBits(int number){
    vector<int> res;
    while(number!=0){
        res.push_back(number&1);
        number=number>>1;
    }
    return 0;
}

int main() {
    int n=7;
    cout<<"number of 1s in the bit:"<<reverseTheBits(n)<<endl;
}