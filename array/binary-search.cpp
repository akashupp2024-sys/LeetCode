class Solution {
public:
    int search(vector<int>& nums, int target) {
    //     int n = nums.size();
    //     for(int i = 0; i< n; i++){
    //         if(nums[i] == target){
    //             return i;

    //         }

    //     }

    //     return -1;

        int st = nums[0];
        int end = nums.size()-1;
        while (st <= end){
            int mid = st + (end - st)/2;

           
            if (nums[mid] > target){
                end  = mid - 1;

            }
            else if (nums[mid] < target){

                st = mid + 1;
            }
            else {
                return mid;
            }
           

            
        }

        return -1;

        

        
    }
};