class Solution {
public:
    int rob(vector<int>& nums) {
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i< nums.size(); i++){
            if(i % 2 == 0){
                sum1 += nums[i];
            }
            else {
                sum2 += nums[i];
            }
        }
        int maxsum = max(sum1, sum2);
        return maxsum;
        
    }
};