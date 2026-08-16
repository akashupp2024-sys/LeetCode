class Solution {
public:
    int thirdMax(vector<int>& nums) {

        int largest = INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;

        for(int x : nums){
            if(x > largest){
                third = second;
                second = largest;
                largest = x;

            }

            else if (x > second && x != largest){
                third = second;
                second = x;

            }
            else if(x > third && x != second && x != largest ){
                third = x;
            }
        }
        if(third == INT_MIN){
            return largest;
        }

        return third;
        
    }
};