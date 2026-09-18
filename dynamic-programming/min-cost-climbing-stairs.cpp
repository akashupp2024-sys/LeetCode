class Solution {
public:

    int climbrec(vector<int>& cost, int i){
        if(i >= cost.size()){
            return 0;
        }
        return cost[i] + min(climbrec(cost,i+1), climbrec(cost, i+2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int i;

        return min(climbrec(cost, 0), climbrec(cost, 1));
        
    }
};