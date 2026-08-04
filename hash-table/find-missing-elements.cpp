class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        // int maxelement = INT_MIN;
        // int minelement = INT_MAX;

        // for(int i = 0; i< nums.size(); i++){
        //     maxelement = max(maxelement, nums[i]);
        //     minelement = min(minelement, nums[i]);


        // }

        sort(nums.begin(), nums.end());

        vector<int> ans;

        for(int i = 1; i< nums.size(); i++){
            for(int j = nums[i-1] + 1; j < nums[i]; j++){
                ans.push_back(j);
            }
        }

        return ans;


        
    }
};