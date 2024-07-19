class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
 set<vector<int >>st;
 

        vector<vector<int>>ans;
         if(nums.size()<4)return ans;

                  sort(nums.begin(),nums.end());
          for(int i = 0; i<nums.size(); i++){
               for(int j = i+1; j<nums.size(); j++){
                int l = j+1;
                int r = nums.size()-1;
                while(l<r){
                  if((long)nums[l]+nums[r]+nums[i]+nums[j]==target){
                st.insert({nums[i],nums[j],nums[l],nums[r]});

                l++;
                r--;
                  }
                    else if((long)nums[l]+nums[r]+nums[i]+nums[j]>target){
                         r--;
                    }
                    else{
                        l++;
                    }
                }
               }
          }
for(auto it:st){
    ans.push_back(it);
}

          return ans;
    }
};
