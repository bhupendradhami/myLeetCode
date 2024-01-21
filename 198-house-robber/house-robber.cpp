class Solution {
public:
    int n;
    int t[100];

    int solve(vector<int>& nums, int i) {
        if (i >= n) return 0;

        if (t[i] != -1) return t[i];

        int steal = nums[i] + solve(nums, i + 2);
        int skip = solve(nums, i + 1);
        
        return t[i] = max(steal, skip);
    }

    int rob(vector<int>& nums) {
        n = nums.size();
        memset(t, -1, sizeof(t));
        return solve(nums, 0);
    }
};