class Solution {
public:
    int maxArea(vector<int>& h) {
     int ans =0;
     int l =0;
     int r = h.size()-1;
     int maxi = INT_MIN;
     int mini = INT_MAX;

     while(l<r){
      int lh = h[l];
      int rh = h[r];
      mini = min(lh, rh)*(r-l);
      maxi = max(maxi , mini);
      if(lh<rh){
        l++;
      }
      else{
        r--;
      }



     }
return maxi;

    }
};
