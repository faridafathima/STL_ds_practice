#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target);
};

vector<int> Solution::twoSum(vector<int>& nums, int target){
    vector<int> res;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j] == target){
                res.push_back(i);
                res.push_back(j);
                break;
            }
        }
    }
    return res;
}

int main() {
    vector<int> nums={2,7,11,15};
    int target = 9;
    Solution s1;
    vector<int> res=s1.twoSum(nums,target);
    cout<<"resultant indices of two sum are:"<<endl;

    int count=0;
    cout<<"[";
    for(auto itr:res){
        count++;
        cout<<itr;
        if(count!=2)
            cout<<",";
    }
    cout<<"]"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------";
    return 0;
}
