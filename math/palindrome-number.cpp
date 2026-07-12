class Solution {

public:
    bool isPalindrome(long x) {
        long reverse = 0;
        long original = x;
        while(x>0)
        {
            long digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;

        }
        return (original == reverse);
    }
};