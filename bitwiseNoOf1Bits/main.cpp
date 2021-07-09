#include<iostream>
#include<vector>
using namespace std;

int bitwiseNoOf1Bits(int number){
    int count=0;
    int res;
    while(number!=0){
        res=number&1;
        count=count+res;
        number = number>>1;
    }
    return count;
}

int main() {
    int n=5;
    cout<<"number of 1s in the bit:"<<bitwiseNoOf1Bits(n)<<endl;
}