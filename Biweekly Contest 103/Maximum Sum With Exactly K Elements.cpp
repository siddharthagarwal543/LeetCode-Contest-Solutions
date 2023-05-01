class Solution {
public:
    //the optimal way to maximize score is to take maximum element each time and increement it with 1. i.e we will take max element of array k times and increement it k-1 times so ans=mx*k+(sum(1,2,,,,,k-1))
    int maximizeSum(vector<int>& nums, int k) {
        int mx=*max_element(nums.begin(),nums.end());
        return mx*k+(k*(k-1))/2;
    }
};

class Solution {
public:
    //the optimal way to maximize score is to take maximum element each time and increement it with 1. i.e we will take max element of array k times and increement it k-1 times so ans=mx*k+(sum(1,2,,,,,k-1))
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return mx*k+(k*(k-1))/2;
    }
};