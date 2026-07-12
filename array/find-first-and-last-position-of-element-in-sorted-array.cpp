class Solution {
public:


        int findfirst(vector<int>&arr , int target){
            int start = 0, end = arr.size()- 1;
            int ans = -1;
            while(start <= end){
                int mid = start + (end - start)/2;
                if(arr[mid] == target){
                    ans = mid;
                    end = mid - 1;
                }
                else if (arr[mid]< target){
                    start = mid + 1;
                }
                else if (arr[mid] > target){
                    end = mid - 1;
                }

            }
            return ans;
        }
        int findlast(vector<int>&arr, int target){
            int start = 0, end = arr.size()-1;
            int ans = -1;
            while(start <= end){
                int mid = start + (end - start) / 2;
                if(arr[mid] == target){
                    ans = mid;
                    start = mid + 1;
                }
                else if (arr[mid] < target){
                    start = mid + 1;
                }
                else if (arr[mid] > target){
                    end = mid - 1;

                }
            }
            return ans;
        }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findfirst(nums, target);
        int last = findlast(nums, target);

        return {first, last};

    }
};