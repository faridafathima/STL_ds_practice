/*
 * An anagram of a string is another string that contains the same characters,
 * only the order of characters can be different. For example, “abcd” and “dabc” are an anagram of each other
 */

#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution{
public:
    bool isAnagram(string s, string t);
    bool isAnagramWithoutSort(string s, string t);
};

bool Solution::isAnagram(string s, string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        return true;
    }else{
        return false;
    }
}

bool Solution::isAnagramWithoutSort(string s, string t){
    map<char,int> m1;
    map<char,int> m2;

    for(int i=0;i<s.size();i++){
        auto itr = m1.find(s[i]);
        if(itr==m1.end()){
            m1.insert({s[i],1});
        }else{
            itr->second++;
        }
    }
    for(int i=0;i<t.size();i++){
        auto itr = m2.find(t[i]);
        if(itr==m2.end()){
            m2.insert({t[i],1});
        }else{
            itr->second++;
        }
    }
    if(m1==m2){
        return true;
    }else{
        return false;
    }

}

int main() {
    Solution s1;
    string s = "anagram", t = "anagram";
    cout <<"whether anagram or not:"<<s1.isAnagram(s,t)<<endl;
    cout <<"whether anagram or not without sort builtin method:"<<s1.isAnagramWithoutSort(s,t)<<endl;
    return 0;
}
