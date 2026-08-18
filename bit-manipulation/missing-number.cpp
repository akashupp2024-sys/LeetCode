class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n = nums.size();
      int i = nums[n-1];
      int sum1 = 0,sum2 = 0;

      int k = 0;
      while(k <= n){
        sum1 = sum1 + k;
        k++;

      }
      for(int j = 0; j < n; j++){
        sum2 = sum2 + nums[j];

      }

      return sum1 - sum2;
        
    }
};