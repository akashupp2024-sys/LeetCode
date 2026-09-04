class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // int sum = 0, res = 0;

        // for(int i = 0; i< people.size(); i++){
        //     sum = sum + people[i];
        //     if(sum < limit){
        //         sum = sum + limit;
        //     }
        //     else if(sum > limit){
        //         sum = sum - people[i];
        //         i--;
        //     }
        //     else{
        //         res++;
        //     }
        // }
        // return res;

        int i = 0;
        int j = people.size() - 1;
        int res = 0;

        while(i <= j){
            int sum = people[i] + people[j];
            if(sum <= limit){
                res++;
                i++;
                j--;
            }
            else {
                i++;
                res++;
            }
        }

        return res;
        
    }
};