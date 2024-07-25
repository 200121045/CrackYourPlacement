class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
     int   n=nums.size();
        unordered_map<int, int>m;
        for(int i =0; i<n; i++){
            m[nums[i]]++;
        }
       vector<pair<int , int>>v;
        for(auto &it:m){
            v.push_back(make_pair(it.second,it.first));
        }
        sort(v.begin(),v.end());
        // reverse(v.begin(),v.end());
        for(int i =0; i<m.size(); i++){
            while(v[i].first--){
                ans.push_back(v[i].second);
            }
        }
        
        return ans;
    }
};
