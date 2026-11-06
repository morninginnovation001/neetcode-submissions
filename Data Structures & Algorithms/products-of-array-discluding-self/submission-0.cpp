class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
          int n=nums.size();
          vector<int>result(n);
          for(int i=0;i<n;i++){
            int p=1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    p*=nums[j];
                }
            }
            result[i]=p;
          }
          return result;
    }
};
