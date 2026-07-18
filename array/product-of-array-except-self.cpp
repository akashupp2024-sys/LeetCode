class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int>ans;

       for(int i = 0; i< nums.size(); i++){
        int leftpro = 1;
        int rightpro = 1;

        for(int j = 0; j< i; j++){
            leftpro = leftpro * nums[j];
        }

        for(int j = i + 1; j< nums.size(); j++){

            rightpro = rightpro * nums[j];
        }

        ans.push_back(leftpro * rightpro);

       }

       return ans;

        
    }
};