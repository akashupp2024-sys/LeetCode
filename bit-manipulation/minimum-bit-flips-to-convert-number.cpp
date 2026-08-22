class Solution {
public:
    int countsetbit(int n){
        int count = 0;
        while(n > 0){
            count++;
            n = n & (n-1);
        }
        return count;
    }
    int minBitFlips(int start, int goal) {

        return countsetbit(start^goal);
        
    }
};