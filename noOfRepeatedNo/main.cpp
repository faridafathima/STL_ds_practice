#include<iostream>
#include<vector>
using namespace std;
/**
 *
 * @param number
 * @param ele
 * @return
 */
int noOfRepeatedDigit(int number, int ele){
    int count=0;
    while(number!=0) {
        int singledigit = number % 10;
        if (singledigit == ele)count++;
        number = number / 10;
    }
    return count;
}
int noOfRepeatedDigitRec(int number, int ele){
        int singledigit = number % 10;
        number = number / 10;
        if (singledigit == ele)
            return 1+noOfRepeatedDigit(number,ele);
        else
            return noOfRepeatedDigit(number,ele);
}

int main() {
    int num=1234531333;
    int ele=3;
    cout<<"number of times 3 is repeated:"<<noOfRepeatedDigit(num,ele)<<endl;
    cout<<"number of times 3 is repeated:"<<noOfRepeatedDigitRec(num,ele)<<endl;
}