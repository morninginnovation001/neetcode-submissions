public class Solution {
    public int Trap(int[] height) {
      int l = 0;
      int r = height.Length - 1;

      int lmax = 0 ;

      int rmax = 0;

      int ans = 0;

      while(r > l){
        lmax = Math.Max(lmax , height[l]);
        rmax = Math.Max(rmax , height[r]);

        if(lmax < rmax){
            ans += lmax - height[l];

            l++;
        }
        else{
            ans += rmax - height[r];
            r--;
        }

      }

      return ans;  
    }
}
