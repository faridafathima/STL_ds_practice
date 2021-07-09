/*Latest Time by Replacing Hidden Digits
 *You are given a string time in the form of hh:mm, where some of the digits in the string are hidden (represented by ?).
 *The valid times are those inclusively between 00:00 and 23:59.
 *Return the latest valid time you can get from time by replacing the hidden digits.
Example 1:
Input: time = "2?:?0"
Output: "23:50"
Explanation: The latest hour beginning with the digit '2' is 23 and the latest minute ending with the digit '0' is 50.
Example 2:
Input: time = "0?:3?"
Output: "09:39"
 * */

#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    string maximumTime(string time);
};

string Solution::maximumTime(string time){

}

int main() {
    string time = "2?:?0";
    Solution s;
    string hiddenString=s.maximumTime(time);
    cout<<"hiddenstring is"<<hiddenString<<endl;
    return 0;
}
