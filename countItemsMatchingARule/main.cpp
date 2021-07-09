/*
 * You are given an array rectangles where rectangles[i] = [li, wi] represents the ith rectangle of length li and width wi.
You can cut the ith rectangle to form a square with a side length of k if both k <= li and k <= wi. For example, if you have a rectangle [4,6], you can cut it to get a square with a side length of at most 4.
Let maxLen be the side length of the largest square you can obtain from any of the given rectangles.
Return the number of rectangles that can make a square with a side length of maxLen.

Example 1:
Input: rectangles = [[5,8],[3,9],[5,12],[16,5]]
Output: 3
Explanation: The largest squares you can get from each rectangle are of lengths [5,3,5,5].
The largest possible square is of length 5, and you can get it out of 3 rectangles.
 */

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue);
};

int Solution::countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue){
    int count;
    if(ruleKey=="type"){
        for(auto itr:items){
            string value=*itr.begin();
            if(value==ruleValue){
                count++;
            }
        }
    }else if(ruleKey=="name"){
        for(auto itr:items){
            string value=*(itr.end()-1);
            if(value==ruleValue){
                count++;
            }
        }
    }else{
        for(auto itr:items){
            string value=*(itr.begin()+1);
            if(value==ruleValue){
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<vector<string>> items;
    string rulekey="type";
    string rulevalue="phone";

    int elements=3;
    vector<string> v1;
    v1={"phone","blue","pixel"};
    items.push_back(v1);
    v1={"computer","silver","phone"};
    items.push_back(v1);
    v1={"phone","gold","iphone"};
    items.push_back(v1);

    Solution s1;
    int count = s1.countMatches(items,rulekey,rulevalue);
    cout<<"count is"<<count;

    return 0;
}
