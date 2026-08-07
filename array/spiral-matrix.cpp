class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int top = 0;
        int buttom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        vector<int> ans;

        while(top<= buttom && left <= right){
            for(int j = left; j <= right; j++){
                ans.push_back(matrix[top][j]);
            }
            top++;

            for(int i = top; i<= buttom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            if(top <= buttom){
                for(int j = right; j>= left; j--){
                    ans.push_back(matrix[buttom][j]);
                }
                buttom--;
            }

            if(right <= left){
                for(int i = buttom; i>= top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }

            
        }

        return ans;
        
    }
};