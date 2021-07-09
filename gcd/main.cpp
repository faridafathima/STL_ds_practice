#include<iostream>
#include<vector>
using namespace std;

class GCDSolution{
public:
    int getGCD(int a, int b);

    int getGCDEuclid(int a, int b);
};

/*
 * euclid
 * suppose a b
 * a%b becomes zero then b is the gcd
 * else continue with a%b b value to a and res in b
 * a=6
 * b=8
 * gcd(6,8) -> gcd(8,6) -> gcd(6,2)->gcd(2,0) returns 2
 * gcd(8,30)- > gcd(30,8) -> gcd(8,6) -> gcd(6,2) -> gcd(2,0)
 *
 */
int GCDSolution::getGCDEuclid(int a, int b) {
    if(b==0) return a;
    else{
        int rem=a%b;
        return getGCDEuclid(b,rem);
    }
}

/*
 * Brute force
 * check which value is smaller whether a or b
 */
int GCDSolution::getGCD(int a, int b){
    int smallest;
    if(a<b){
        smallest=a;
    }else{
        smallest=b;
    }
    int gcd=1;
    for(int i=2;i<=smallest;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;
}

int main() {
    int a=8,b=40;
    GCDSolution s1;
    cout<<"GCD is:"<<s1.getGCD(a,b);
    cout<<"GCD is:"<<s1.getGCDEuclid(a,b);
    return 0;
}
