class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prefixsum = nums[0];
        for(int i = 1; i< nums.size(); i++){
            if(nums[i] == nums[i-1] + 1){
                    prefixsum += nums[i];
                }
                else {
                    break;
                }
        }

        while(true){
            bool found = false;

            for(int i = 0; i<nums.size(); i++){
                if(nums[i] == prefixsum){
                    found = true;
                    break;
                }
            }
            if(found){
                prefixsum++;
            }
            else {
                break;
            }
        }

        return prefixsum;
        
    }
};