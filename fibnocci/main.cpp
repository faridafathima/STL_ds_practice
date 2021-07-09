#include<iostream>
#include<vector>
using namespace std;

int fib(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    int f1=0,f2=1,total;
    for(int i=0;i<n;i++){
        total=f1+f2;
        f1=f2;
        f2=total;
    }
    return total;
}

int main() {
    cout <<"fib is:"<<fib(5);
    return 0;
}