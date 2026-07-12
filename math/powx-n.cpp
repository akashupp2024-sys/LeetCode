class Solution {
public:
    double myPow(double x, double n) {
        if(n == 0)
        return 1;
        else if(x == 0)
        return 0;
        else
        return x * pow(x, n-1);
        
    }
};