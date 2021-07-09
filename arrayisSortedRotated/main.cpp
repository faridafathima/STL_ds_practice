#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    bool check(vector<int>& nums);
};

bool Solution::check(vector<int>& nums) {
    auto itr = is_sorted_until(nums.begin(),nums.end());
    if(itr==nums.end()){
        return true;
    }
    if(!is_sorted(itr,nums.end())){
        return false;
    }
    return nums.back() <=nums.front();
}

int main() {
    vector<int> nums={3,4,5,1,2};
    Solution s1;
    bool res=s1.check(nums);
    cout<<"array is sorted and rotated:"<<res<<endl;
    cout<<"--------------------------------------------------------------------------------------------------";
    return 0;
}
