#include<iostream>
using namespace std;

int countCarry(int number1,int number2){
    int count=0;
    int lastcarry=0;

    while(number1!=0 || number2!=0) {
        int singledigit1 = number1 % 10;
        int singledigit2 = number2 % 10;
        int temp=singledigit1+singledigit2+lastcarry;
        if(temp>9){
            count++;
            lastcarry=1;
        }else{
            lastcarry=0;
        }
        number1 = number1 / 10;
        number2 = number2 / 10;
    }
    return count-lastcarry;

}


int countCarryRec(int number1, int number2,int carry){
    if(number1==0 && number2 == 0){
        if(carry==1)
            return -1;
        return 0;
    }
    int singledigit1 = number1 % 10;
    int singledigit2 = number2 % 10;
    number1 = number1 / 10;
    number2 = number2 / 10;
    if (singledigit1+singledigit2+carry>9)
        return 1+countCarryRec(number1,number2,1);
    else
        return countCarryRec(number1,number2,0);
}

int main() {
    int num=4232;
    int ele=8981;
    cout<<"number of carries:"<<countCarry(num,ele)<<endl;
    cout<<"number of carries:"<<countCarryRec(num,ele,0)<<endl;
    return 0;
}