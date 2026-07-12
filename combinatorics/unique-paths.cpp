class Solution {
public:
    int uniquePaths(int m, int n) {
        double  fact = 1, fact1 = 1, fact2 = 1;
        // long long ways;
        // long long fact = 1;
        // if(m + n - 2 > 0)
    
            for(int i = 1; i <= m+n-2; i++)
            {
                fact = fact * i;
            }
        
        for(int i = 1; i <= n - 1; i++)
        {
            fact1 = fact1 * i;
        }
        for(int i = 1; i <= m-1; i ++)
        {
            fact2 = fact2 * i;
        }

        // int result = (fact / (fact1 * fact2));

        return (int)round(fact / (fact1 * fact2));

        
    }
};