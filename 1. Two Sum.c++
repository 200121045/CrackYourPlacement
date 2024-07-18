class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int>v;
         int sum=0;
         unordered_map<int,int>mp;
        //  mp.insert({0,1});
         for(int i = 0; i<nums.size(); i++){
             sum=sum+nums[i];
            if(mp.find(target-nums[i])!=mp.end()){
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
            }
            mp[nums[i]]=i;
         }
         return v;

    }
};
