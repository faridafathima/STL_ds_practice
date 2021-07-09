/*
 * You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.
 * Return the merged string.
 * Example 1:
 * Input: word1 = "abc", word2 = "pqr"
 * Output: "apbqcr"
 * Explanation: The merged string will be merged as so:
 * word1:  a   b   c
   word2:    p   q   r
   merged: a p b q c r
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2);
};

string Solution::mergeAlternately(string word1, string word2){
    vector<char> finalstring;
    if(word1.size()==word2.size()){
        int j;
        for(int i=0;i<word1.size();i++){
            j=i;
            finalstring.push_back(word1[i]);
            finalstring.push_back(word2[j]);
        }
    }else if(word1.size()>word2.size()){
        int i=0;
        int j=i;
        while(i<word1.size()-1){
            j=i;
            if(j>word2.size()-1)break;
            finalstring.push_back(word1[i]);
            finalstring.push_back(word2[j]);
            i++;
        }
        for(i;i<word1.size();i++){
            finalstring.push_back(word1[i]);
        }
    }else{
        int i=0;
        int j=i;
        while(i<word1.size()){
            j=i;
            if(j<word2.size()){
                finalstring.push_back(word1[i]);
                finalstring.push_back(word2[j]);
            }
            i++;
        }
        for(j=j+1;j<word2.size();j++){
            finalstring.push_back(word2[j]);
        }
    }
    std::string s(finalstring.begin(), finalstring.end());
    return s;
}

int main() {
    Solution s1;
    string finalString=s1.mergeAlternately("ab","pqrs");
    cout<<"final string is:"<<finalString<<endl;
    return 0;
}
