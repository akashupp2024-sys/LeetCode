class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        int sum = 0, e = 0, count = 0;

        for (int i = e; i < nums.size(); i++) {
            sum = sum ^ nums[i];
            if (sum == 0) {
                e = 1;
            }

            else {
                count++;
            }
        }

        return count;
    }
};