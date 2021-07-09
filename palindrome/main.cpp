/*Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
*/

#include<cctype>
#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    bool isPalindrome(string s);
};

bool Solution::isPalindrome(string s){
    vector<char> intermediatestring;
    for(int i=0;i<s.size();i++) {
        if(isalpha(s[i])||isdigit(s[i])){
            intermediatestring.push_back(tolower(s[i]));
        }
    }
    int flag=0;
    string s2(intermediatestring.begin(),intermediatestring.end());
    int size=s2.size();
    for(int i=0;i<size/2;i++){
        if(s2[i]!=s2[size-1-i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        return false;
    }else{
        return true;
    }
}

int main() {
    string s="0P";
    Solution s1;
    cout<<"it is palindrome?"<<s1.isPalindrome(s)<<endl;
    return 0;
}
