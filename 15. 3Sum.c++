class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        for(int i =0; i<nums.size(); i++){
            int l =i+1;
            int r = nums.size()-1;
            while(l<r){
                int sum = nums[l]+nums[r]+nums[i];

                if(sum==0){
                    st.insert({nums[l], nums[r] , nums[i]});
                    l++;
                    r--;
                }
                else if(sum>0){
                    r--;
                }
                else{
                    l++;
                }

            }
        
        while(i<nums.size() && nums[i]==nums[i+1]) i++;
        }
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;

    }
};
