class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0, rp = height.size() - 1;
        int maxwater = 0;
        while(lp < rp){
            int w = rp - lp;
            int h = min(height[lp], height[rp]);
            int areawater = w * h;
            maxwater = max(maxwater, areawater);
            height[lp] < height[rp] ? lp++ : rp--;
        }

        return maxwater;
    }
};