class Solution {
public:
    int findMin(vector<int>& nums) {
        int minval = nums[0];

        for(int i = ; i<nums.size(); i++){
            minval = min(minval, nums[i]);
        }
        

        return minval;
    }
};