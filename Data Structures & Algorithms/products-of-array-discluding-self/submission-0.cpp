class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int pre = 1;
        int suff = 1;
        for(int i = 0; i<nums.size();i++)
        {
            ans.push_back(pre);
            pre *= nums[i];
        }
        for(int i = nums.size()-1; i>-1;i--)
        {
            ans[i]*=suff;
            suff *= nums[i];
        }
        return ans;
    }
};
