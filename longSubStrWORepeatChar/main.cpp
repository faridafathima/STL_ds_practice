/* Given a string s, find the length of the longest substring without repeating characters.
Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
*/

#include<cctype>
#include<iostream>
#include<map>
#include<set>
using namespace std;

string longestSubStrwoRepeatChar(string s){
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
        set<char> s1;

        for(int i=0;i<check.size();i++){
            auto itr=s1.find(check[i]);
            if(itr==s1.end()) {
                s1.insert(check[i]);
            }else{
                flag=1;
                break;
            }
        }
        s1.clear();
        if(flag==0)return check;
        flag=0;
    }
    return "";
}

int main() {
    string s="abcabcbb";
    cout<<"longest substring without repeating char:"<<longestSubStrwoRepeatChar(s)<<endl;
    return 0;
}
