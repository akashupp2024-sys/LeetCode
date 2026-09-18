class Solution {
public:
    int solvemem(vector<int>& nums, int i, vector<int>& dp){

        if(i >= nums.size()){
            return 0; 
        }

        if(dp[i] != -1){
            return dp[i];
        }

        int include = nums[i] + solvemem(nums, i+2, dp);
        int exclude = 0 + solvemem(nums, i+1, dp);

        dp[i] = max(include, exclude);

        return dp[i];
    }
    int rob(vector<int>& nums) {
        //int n = nums.size();
        vector<int>dp(nums.size(), -1);

        return solvemem(nums, 0, dp);
        
        
    }
};