class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int, int>> ans;
        vector<int> res;
        for(int i = 0; i< arr.size(); i++){
            int n = abs(arr[i] - x);
            ans.push_back({n, arr[i]});
        }
        sort(ans.begin(), ans.end());

        for(int i = 0; i< k; i++){
            res.push_back(ans[i].second);
        }
        sort(res.begin(), res.end());
        return res;

        
    }
};