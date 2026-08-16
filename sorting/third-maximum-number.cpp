class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long largest = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

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
        if(third == LLONG_MIN){
            return largest;
        }

        return third;
        
    }
};