class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i< n; i++){
            for(int j = 0; j<m; j++){
                if(target == matrix[i][j]){
                    return 1;
                }
            }
        }
        return 0;

        // int m = matrix.size();
        // int n = matrix[0].size();
        // int left = 0;
        // int right = (m * n) - 1;
        // while(left <= right)
        // {
        //     int mid = right + (left - right) / 2;
        //     int row = mid / n;
        //     int col = mid % n;
        //     int guess = matrix[row][col];
        //     if(guess == target)
        //     return true;
        //     else if(guess < target)
        //     left = mid + 1;
        //     else
        //     right = mid - 1;
            
        // }
        // return false;
        
    }
};