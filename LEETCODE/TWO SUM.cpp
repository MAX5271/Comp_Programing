// LINK TO THE QUESTION : https://leetcode.com/problems/two-sum/
// CODE : https://leetcode.com/submissions/detail/1127666077/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,c1=0,c2=0,c=0;
        vector<int> r;
        for(i=0;i<nums.size();i++){
        for(j=i;j<nums.size();j++){
            if(nums[i]+nums[j]==target&&i!=j)
            {c++;c1=i;c2=j;break;}
        }
        if(c!=0) break;
        }
        r.push_back(c1);
        r.push_back(c2);
        return r;

    }
};
