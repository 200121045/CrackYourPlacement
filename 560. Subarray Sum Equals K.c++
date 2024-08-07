class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int c=0;
        unordered_map<int , int>mp;
        for(int i =0; i<nums.size(); i++){
            sum+=nums[i];

            if(sum==k){
                 c++;
            }
            if(mp.find(sum-k)!=mp.end()){
                c+=mp[sum-k];
            }
            mp[sum]++;
        }
        return c;
    }
};
