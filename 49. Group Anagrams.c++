class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //   vector<vector<string>>ans;
        //   vector<string>v;
        //   unordered_map<string, vector<string>>mp;
        //   for(int i =0; i<strs.size(); i++){
        //     string rev = strs[i];
        //     sort(rev.begin(), rev.end());
        //     mp[rev].push_back(strs[i]);

        //   }
        //   for(auto it:mp){
        //     ans.push_back(it.second);
        //   }
        vector<vector<string>>ans;
        vector<string>v;
        unordered_map<string , vector<string>>mp;
        for(int i =0; i<strs.size(); i++){
             string rev = strs[i];
             sort(rev.begin(), rev.end());
             mp[rev].push_back(strs[i]);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
 
return ans;
    }

};
