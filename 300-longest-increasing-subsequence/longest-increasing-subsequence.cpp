class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;

        vector<int>ans;
        ans.push_back(nums[0]);

        for(int i=1;i<n;i++){
            if(nums[i] > ans.back()){
                ans.push_back(nums[i]);
            }else{
                int index=lower_bound(ans.begin(), ans.end(), nums[i]) - ans.begin();
                // int index = address - index
                ans[index]=nums[i];
            }
        }
        return ans.size();
    }
};