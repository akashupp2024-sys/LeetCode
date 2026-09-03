class Solution {
public:

    int LCS(string &text1, string &text2, int m, int n){
        if(m ==0 || n == 0){
            return 0;
        }
        if(text1[m-1] == text2[n-1]){
            return 1 + LCS(text1, text2, m-1, n-1);
        }
        return max(LCS(text1, text2, m-1 , n), LCS(text1, text2, m, n-1));
    }
    int longestCommonSubsequence(string text1, string text2) {

        int m = text1.size();
        int n = text2.size();

        return LCS(text1, text2, m, n);
        
    }
};