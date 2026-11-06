class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int lp=0;
        int rp=n-1;
        int maxWater=0;
        while(lp<rp){
            int crWater=min(heights[lp],heights[rp]) * (rp-lp);
            maxWater= max(maxWater,crWater);
            if(heights[lp]<heights[rp]){
                lp++; 
             }
             else{
                rp--;
             }
        }
        return maxWater;
        
    }
};
