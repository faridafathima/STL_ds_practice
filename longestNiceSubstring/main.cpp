/*
A string s is nice if, for every letter of the alphabet that s contains, it appears both in uppercase and lowercase. For example, "abABB" is nice because 'A' and 'a' appear, and 'B' and 'b' appear. However, "abA" is not because 'b' appears, but 'B' does not.
Given a string s, return the longest substring of s that is nice. If there are multiple, return the substring of the earliest occurrence. If there are none, return an empty string.

 Example 1:

Input: s = "YazaAay"
Output: "aAa"
Explanation: "aAa" is a nice string because 'A/a' is the only letter of the alphabet in s, and both 'A' and 'a' appear.
"aAa" is the longest nice substring.
*/

#include<iostream>
#include<vector>
#include<map>
#include<numeric>
using namespace std;

class Solution {
public:
    string longestNiceSubstring(string s);
};

string Solution::longestNiceSubstring(string s) {
    vector<pair<char, int>> sub_string;
    vector<char> sub;
    vector<pair<int, vector<char>>> final_string;
    int flag = 0;
    for (int i = 0; i < s.size(); i++) {
        sub_string.push_back({s[i], 0});
    }
    vector<char> substr;
    if (s.size() == 1) {
        return "";
    } else if (s.size() == 2) {
        if (isupper(s[0])) {
            if (islower(s[1])) {
                char single = tolower(s[0]);
                if (single == s[1]) {
                    substr.push_back(s[0]);
                    substr.push_back(s[1]);
                }
            }
        } else {
            if (islower(s[0])) {
                if (isupper(s[1])) {
                    char single = toupper(s[0]);
                    if (single == s[1]) {
                        substr.push_back(s[0]);
                        substr.push_back(s[1]);
                    }
                }
            }
        }
        string final(substr.begin(),substr.end());
        return final;
    } else {
        for (int i = 0; i < s.size(); i++) {
            int j = i + 1;
            if (isupper(sub_string[i].first)) {
                if (islower(sub_string[j].first)) {
                    char single = sub_string[i].first;
                    if (tolower(single) == sub_string[j].first || toupper(single) == sub_string[j].first) {
                        if (sub_string[i].second == 0) {
                            substr.push_back(sub_string[i].first);
                            sub_string[i].second = 1;
                        }
                        substr.push_back(sub_string[j].first);
                        sub_string[j].second = 1;
                        flag = 0;
                        /*if(sub_string[j+1].first== tolower(single)){
                            i++;
                        }*/
                    } else if((sub_string[j+1].first== tolower(sub_string[j].first))
                              ||(sub_string[j+1].first== toupper(sub_string[j].first))){
                        substr.push_back(sub_string[j].first);
                        substr.push_back(sub_string[j+1].first);
                        i++;
                        j++;
                    }else {
                        flag = 1;
                    }
                }
            } else {
                if (islower(sub_string[i].first)) {
                    if (isupper(sub_string[j].first)) {
                        char single = sub_string[i].first;
                        if (toupper(single) == sub_string[j].first||tolower(single) == sub_string[j].first) {
                            if (sub_string[i].second == 0) {
                                substr.push_back(sub_string[i].first);
                                sub_string[i].second = 1;
                            }
                            substr.push_back(sub_string[j].first);
                            sub_string[j].second = 1;
                            flag = 0;
                            /*if(sub_string[j+1].first== tolower(single)){
                                i++;
                            }*/
                        }else if((sub_string[j+1].first== tolower(sub_string[j].first))
                                   ||(sub_string[j+1].first== toupper(sub_string[j].first))){
                            substr.push_back(sub_string[j].first);
                            substr.push_back(sub_string[j+1].first);
                            i++;
                            j++;
                        }
                        else {
                            flag = 1;
                        }
                    }
                }
            }
            if (flag == 1 && substr.size() > 0) {
                int sub_size = substr.size();
                final_string.push_back({sub_size, substr});
                substr.clear();
                flag = 0;
            }
        }

        if (final_string.size() == 0 && substr.size() == 0) {
            return "";
        } else{ if(substr.size()>0) {
                int sub_size = substr.size();
                final_string.push_back({sub_size, substr});
            }
        }
        if (final_string.size() > 0) {
                auto itr = final_string.begin();
                vector<pair<int, vector<char>>>::iterator itr1 = final_string.begin() + 1;
                while (itr1 != final_string.end()) {
                    if (itr1->first > itr->first) {
                        itr = itr1;
                    }
                    itr1++;
                }
                sub = itr->second;
                string final(sub.begin(), sub.end());
                return final;

            }else {
            string final(substr.begin(), substr.end());
            return final;
        }
    }
}

int main() {
    Solution s1;
    string finalString=s1.longestNiceSubstring("cC");
    if(finalString==""){
        cout<<"\"\""<<endl;
    }else {
        cout << "Nice substring is:" << finalString << endl;
    }
    return 0;
}
