class Solution {
public:
    bool checkDivisibility(int n) {
        int sum1 = 0, pro = 1, original = n;

        while(n > 0){
            int digit = n % 10;
            sum1 = sum1 + digit;
            pro = pro * digit;
            n = n / 10;
        }
        

        if(original % (sum1 + pro) == 0){
            return true;
        }
        else {
            return false;
        }

        
        
    }
};