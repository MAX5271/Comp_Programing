// LINK TO THE QUESTION: https://leetcode.com/contest/biweekly-contest-125/problems/minimum-operations-to-exceed-threshold-value-i/
// CODE : https://leetcode.com/contest/biweekly-contest-125/submissions/detail/1191665388/

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count=0;
        sort(nums.begin(),nums.end());
        while(nums[count]<k)
        {
            count++;
            
        }
        return count;
    }
};
