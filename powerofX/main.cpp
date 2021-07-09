#include<iostream>
#include<vector>
using namespace std;

int powerOfX(int base, int power){
    int sum=base;
    for(int i=1;i<power;i++){
        sum = sum*base;
    }
    return sum;
}

int powerOfXRec(int base, int power,int sum) {
    if(power==0)return sum;
    return powerOfXRec(base,--power,sum*base);
}

int main() {
    int base=2;
    int power=5;
    int sum=1;
    cout<<"number of carries:"<<powerOfX(2,5)<<endl;
    cout<<"number of carries:"<<powerOfXRec(2,5,sum)<<endl;
    return 0;
}