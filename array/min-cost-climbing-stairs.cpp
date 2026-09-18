class Solution {
public:
    int climbmemo(vector<int>& cost, int  i, vector<int>& dp){
        if(i >= cost.size()){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }

        dp[i] =  cost[i] + min(climbmemo(cost,i+1, dp), climbmemo(cost, i+2, dp));


        return dp[i];

    }

    int climbrec(vector<int>& cost, int i){
        if(i >= cost.size()){
            return 0;
        }
        return cost[i] + min(climbrec(cost,i+1), climbrec(cost, i+2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        

        // return min(climbrec(cost, 0), climbrec(cost, 1));

        vector<int>dp(cost.size(), -1);

        return min(climbmemo(cost , 0, dp), climbmemo(cost, 1, dp));
        
    }
};