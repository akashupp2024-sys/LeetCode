class Solution {
public:
    int LCS(string &s1, string &s2, int i, int j){
        if(i == s1.size() || j == s2.size()){
            return 0;
        }
        if(s1[i] == s2[j]){
            return 1 + LCS(s1,s2,i+1, j+1);
        }

        return max(LCS(s1, s2, i+1, j), LCS(s1, s2, i, j+1));
    }
    int longestPalindromeSubseq(string s) {

        string rev = s;
        reverse(rev.begin(), rev.end());

        return LCS(s, rev, 0, 0);
        
    }
};