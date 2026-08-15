class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        int s = 0;
        int curr = 0, count = 0, zeros = 0;

        for (int e = 0; e < nums.size(); e++) {
            if (nums[e] % 2 == 0) {
                nums[e] = 0;

            } else {
                nums[e] = 1;
            }
        }

        for (int e = 0; e < nums.size(); e++) {
            curr = curr + nums[e];

            while (k < curr) {
                curr = curr - nums[s];
                s++;
            }

            if (curr == k) {

                int temp = s;
                int zeros = 0;

                while (temp <= e && nums[temp] == 0) {
                    zeros++;
                    temp++;
                }

                count += zeros + 1;
            }
        }

        return count;
    }
};