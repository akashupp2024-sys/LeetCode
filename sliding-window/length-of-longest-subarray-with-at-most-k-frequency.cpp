class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int, int> freq;
        int left = 0, ans = 0;

        for(int right = 0; right<nums.size(); right++){
            freq[nums[right]]++;

            while(freq[nums[left]] > k){
                freq[nums[left]]--;
                // left++;
            }

            ans = max(ans, right-left+1);
        }

        return ans;
        
    }
};