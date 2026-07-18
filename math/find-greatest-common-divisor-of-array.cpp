class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxval = nums[0];
        int minval = nums[0];

        for(int i = 0; i< nums.size(); i++){
            maxval = max(maxval, nums[i]);

           

        }
        for(int i  = 0; i< nums.size(); i++){
            minval = min(minval, nums[i]);
        }

        int ans = gcd(minval, maxval);

        return ans;
        
    }
};