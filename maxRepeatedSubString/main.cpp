/*
 * For a string sequence, a string word is k-repeating if word concatenated k times is a substring of sequence. The word's maximum k-repeating value is the highest value k where word is k-repeating in sequence. If word is not a substring of sequence, word's maximum k-repeating value is 0.
Given strings sequence and word, return the maximum k-repeating value of word in sequence.
Example 1:
Input: sequence = "ababc", word = "ab"
Output: 2
Explanation: "abab" is a substring in "ababc".
 */

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int maxRepeatedSub(string s){
    unordered_map<string,int> sub;
    string temp;
    int length=s.size();
    for(int i=0;i<s.size();i++){
        for(int j=0;j<length-i;j++){
            temp = s.substr(i,j+1);
            if(temp.size()!=1){
                auto itr = sub.find(temp);
                if(itr!=sub.end()){
                    itr->second++;
                }else{
                    sub[temp]=1;
                }
            }
        }
    }
    vector<pair<string,int>> vec(sub.begin(),sub.end());
    sort(vec.begin(),vec.end(),[](pair<string,int>& a,pair<string,int>& b){
        return a.second>b.second;
    });

    return (vec.begin())->second;
}

int main() {
    string s="abcabcabcabc";
    cout<<"maximum repeated sub string is:"<<maxRepeatedSub(s)<<endl;
    return 0;
}
