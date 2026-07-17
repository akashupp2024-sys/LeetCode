class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int zerocount = 0;
        int i = 0; 
        int ans = 0;

        for(int j = 0; j< nums.size(); j++){
            if(nums[j] == 0){
                zerocount++;
            }

            while(zerocount > k){
                if(nums[i] == 0){
                    zerocount--;
                }
                i++;
            }
            ans = max(ans, j-i+1);
        }

        return ans;
        
    }
};