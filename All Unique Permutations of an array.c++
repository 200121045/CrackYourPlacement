// All Unique Permutations of an array
class Solution {
  public:
  vector<vector<int>>ans;
    set<vector<int>>st;

  void caller(vector<int> arr ,int n, int ind){
      vector<int>v;
      if(ind==n){
          st.insert(arr);
          
      }
      else{
      for(int i=ind; i<n; i++){
          swap(arr[ind] , arr[i]);
          caller(arr , n , ind+1);
          swap(arr[ind] , arr[i]);
      }
  }
  }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        // sort(arr.begin(), arr.end());
        int l =0;
        caller(arr , n,0);
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};
