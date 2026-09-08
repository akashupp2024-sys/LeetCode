class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low <= high){
            int mid = low + (high-low)/2;
            int daysneed  = 1;
            int currweight = 0;

            for(int weight : weights){
                if(currweight + weight > mid){
                    daysneed++;
                    currweight = 0;

                }
                currweight += weight;
            }
            if(daysneed <= days){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;

        
    }
};