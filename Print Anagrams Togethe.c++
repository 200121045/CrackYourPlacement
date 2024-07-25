class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& sl) {
        //code here
        vector<vector<string>>ans;
        map<string, vector<string>>mp;
        for(  int i = 0; i<sl.size(); i++){
            auto m = sl[i];
            sort(m.begin(),m.end());
            mp[m].push_back(sl[i]);
        }
        
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
