class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int curr = 0, s =0, e = 0;
        for(int i = 0; i< nums.size(); i++){
            curr += nums[i];

            while(goal < curr){
                curr = curr - nums[s];
                s++;
            }

            if(curr == goal){
                return true;
            }



        }

        return false;
        
    }
};