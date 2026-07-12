class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if((n & (n - 1)) == 0)
        // return true;
        // else if(  n <= 0 )
        // return false;
        // else
        // return false;
        if(n <= 0)
        return false;
        else
        return ((n & (n - 1)) == 0);
        
    }
};