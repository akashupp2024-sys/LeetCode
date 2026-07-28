class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> arr1;
        vector<int> arr2;

        for(int i = 0; i< nums.size(); i++){
            if(nums[i] > 0){
                arr1.push_back(nums[i]);
            }
            else {
                arr2.push_back(nums[i]);
            }
        }
        vector<int> ans;
        int j=0 , k=0  ;
        while(j < arr1.size() && k < arr2.size()){
            ans.push_back(arr1[j]);
            ans.push_back(arr2[k]);
            j++;
            k++;
        }

        return ans;

        
    }
};