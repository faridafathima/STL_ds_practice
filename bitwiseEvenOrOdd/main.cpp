#include<iostream>
#include<vector>
using namespace std;

int bitwiseEvenOrOdd(int number){
    if(number&1){
        cout<<"number is odd"<<endl;
    }else{
        cout<<"number is even"<<endl;
    }
    return 0;
}

int main() {
    int n=5;
    bitwiseEvenOrOdd(n);
}