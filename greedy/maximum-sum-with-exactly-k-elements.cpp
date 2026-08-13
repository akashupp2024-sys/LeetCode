class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {

        int maxele = nums[0];
        int sum = 0;

        for(int i = 0; i<nums.size(); i++){
            maxele = max(maxele, nums[i]);
        }

        while(k > 0){
            sum = sum + maxele;
            maxele++;
            k--;

        }

        return sum;
        
    }
};