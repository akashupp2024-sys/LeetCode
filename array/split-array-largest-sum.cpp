class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
       int n = nums.size();
        int res = INT_MAX;

        // Try every possible split position
        for(int j = 0; j < n - 1; j++) {

            int sum1 = 0;
            int sum2 = 0;

            // First part: 0 to j
            for(int i = 0; i <= j; i++) {
                sum1 += nums[i];
            }

            // Second part: j+1 to n-1
            for(int i = j + 1; i < n; i++) {
                sum2 += nums[i];
            }

            // Largest sum among the two parts
            int largest = max(sum1, sum2);

            // Minimum among all possible splits
            res = min(res, largest);
        }

        return res;
    }
};