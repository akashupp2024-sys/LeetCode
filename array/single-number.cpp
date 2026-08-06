class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for(int i = 0; i< nums.size(); i++){
            int j = i + 1;

            if((nums[i] ^ nums[j]) == 1){
                return nums[i];
            }
        }

        retur
        
    }
};