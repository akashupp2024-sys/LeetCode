class Solution {
public:
    int minMovesToMakePalindrome(string s) {

        int ans = 0;
        int i = 0;
        int j = s.size()-1;
        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
                continue;
            }

            int k = j;
            while(k > i && s[k] != s[i]){
                k--;
            }

            if(k > i){
                while(k < j){
                    swap(s[k], s[k+1]);
                    k++;
                    ans++;
                }
                i++;
                j--;
            }

            else {
                swap(s[i], s[i+1]);
                ans++;
            }
        }

        return ans;
        
    }
};