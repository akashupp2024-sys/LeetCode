class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
       int n = nums.size();
       int low = *max_element(nums.begin(), nums.end());
       int high = accumulate(nums.begin(), nums.end(), 0);

       while(low <= high){
        int mid = low + (high-low)/2;
        int parts = 1;
        int currsum = 0;

        for(int x : nums){
            if(currsum + x > mid){
                currsum = 0;
                parts++;
            }
            currsum += x;
        }

        if(parts <= k){
            high = mid - 1;
        }

        else {
            low = mid +1;
        }

       }

       return low;
    }
};