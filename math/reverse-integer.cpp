class Solution {
public:
    int reverse(long x) {
        long reverse = 0;
        while(x!=0)
        {
            long digit = x % 10;
            reverse = reverse * 10 + digit;
            if (reverse > INT_MAX || reverse < INT_MIN)
                return 0;
            x = x / 10;
        }
        return(reverse);
        
    }
};