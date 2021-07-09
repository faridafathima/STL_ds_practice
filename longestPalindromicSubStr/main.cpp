/*Given a string s, return the longest palindromic substring in s.
 *
Example 1:
Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.

Example 2:
Input: s = "cbbd"
Output: "bb"

Example 3:
Input: s = "a"
Output: "a"
*/

#include<iostream>
#include<map>
using namespace std;

string longestPalindromesubStr(string s){
    multimap<int,string> sub;
    int length=s.size();
    string tempstring;
    for(int i=0;i<length;i++){
        for(int j=1;j<length-i;j++){
            tempstring = s.substr(i,j);
            if(tempstring.length()>1){
                sub.insert({tempstring.size(),tempstring});
            }
        }
    }
    for(auto itr=sub.rbegin();itr!=sub.rend();itr++){
        int flag=0;
        string check = itr->second;
        int n=check.size();
        for(int i=0;i<n/2;i++){
            if(check[i]!=check[n-1-i]) {
                flag = 1;
                break;
            }
        }
        if(flag==0)return check;
    }
    return "";
}

int main() {
    string s="babad";
    cout<<"longest palindrome is:"<<longestPalindromesubStr(s)<<endl;
    return 0;
}