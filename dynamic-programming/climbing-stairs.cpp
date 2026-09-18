class Solution {
public:

    int climbmemo(int n, vector<int> & dp){
        if(n <= 2){
            return n;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        dp[n] = climbmemo(n-1, dp) + climbmemo(n-2, dp);
        return dp[n];

        

    }

    // int climbrec(int n){
    //     if(n <= 2){
    //         return n;
    //     }

    //     return climbrec(n-1) + climbrec(n-2);

    // }
    int climbStairs(int n) {
        // if(n <= 2)
        // return n;
        // int a = 1;
        // int b = 2;
        // for(int i = 3; i <= n; i++)
        // {
        //    int c = a + b;
        //     a = b;
        //     b = c;

        // }
        // return b;

        // return climbrec(n); 

        vector<int> dp(n+1, -1);

        return climbmemo(n, dp);
        
    }

};