class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])==(mp.end())){
                mp[nums[i]]=i;
            }
            else{
                int x=mp[target-nums[i]];
                int y=i;
                return {x,y};
            }
        }
       return {}; 
    }
};
