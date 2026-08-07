class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int x = n;
            int pr = 1;

            while (x > 0) {
                pr = pr * (x % 10);
                x = x / 10;
            }

            if (pr % t == 0) {
                return n;
            }

            n++;
        }
    }
};