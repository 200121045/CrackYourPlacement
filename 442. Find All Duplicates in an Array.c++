class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    vector<int> v;
        int i =0;
        while(i<nums.size()){
            int cur= nums[i]-1;
            if(nums[i]!= nums[cur]){
                swap(nums[i] , nums[cur]);
            }
            else{
                i++;
            }
        }
        int n = nums.size();
        for(int i =0; i<n; i++){
            if(nums[i]!=i+1){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};
