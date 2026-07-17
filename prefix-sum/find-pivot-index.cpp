class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0;
        int totalsum = 0;

        for(int num : nums){
            totalsum = totalsum + num;


        }

        for(int i = 0; i< nums.size(); i++){
            int rightsum = totalsum - leftsum - nums[i];

            if(rightsum == leftsum){
                return i;
            }

            leftsum = leftsum + nums[i];
        }

        return -1;

        
    }
};