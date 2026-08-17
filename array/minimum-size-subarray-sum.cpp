class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int e = 0;
        int sum = 0, ans = INT_MAX;

        for(int i = 0; i< nums.size(); i++){
            sum = sum  + nums[i];

            while(sum >= target){
                ans = min(ans, i-e+1);
                sum = sum - nums[e];
                e++;
            }
        }

        if(ans == INT_MAX){
            return 0;
        }
        else {
            return ans;
        }
        
    }
};