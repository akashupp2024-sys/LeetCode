class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        vector<int> sol;
        int mx = nums[0];

        for(int i = 0; i< nums.size(); i++){

            mx = max(mx , nums[i]);
           sol .push_back(__gcd(nums[i], mx));



        }
        sort(sol.begin(), sol.end());

        long long ans = 0;

        int left = 0;
        int right = sol.size()-1;

        while(left < right){
            ans = ans + (__gcd(sol[left], sol[right]));
            left++;
            right--;
        }

        return ans;


        
    }
};