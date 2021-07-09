/*Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.
Letters are case sensitive, for example, "Aa" is not considered a palindrome here.
Example 1:
Input: s = "abccccdd"
Output: 7
Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.
*/

#include<cctype>
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
public:
    int longestPalindrome(string s);
};

int Solution::longestPalindrome(string s){
    unordered_map<char,int> freq;
    int res=0;
    int odd=0;
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
    }
    for(auto itr:freq){
        if(itr.second%2==0){
            res=res+itr.second;
        }else{
            res=res+itr.second-1;
            odd=1;
        }
    }
    return res+odd;
}

int main() {
    string s="abccccdd";
    Solution s1;
    cout<<"longest palindrome is:"<<s1.longestPalindrome(s)<<endl;
    return 0;
}