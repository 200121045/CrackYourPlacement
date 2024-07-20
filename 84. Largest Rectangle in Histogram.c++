class Solution {
public:
/*ye mene hellow world ke chnnel se kiya hai ! repeat krna hi otherwise___*/
    int largestRectangleArea(vector<int>& height) {
        int n = height.size();
        int curr ;
        int maxi =0;
        for(int  i = 0; i<n; i++){
            curr = height[i];
            for(int  j =i-1; j>=0; j--){
                if(height[j]>=height[i]){
                    curr+=height[i];
                }
                else{
                    break;
                }
            }
            for(int j =i+1; j<n; j++){
                if(height[j]>=height[i]){
                    curr+=height[i];
                }
                else{
                    break;
                }
            }
             maxi = max(maxi , curr);
        }
        return maxi;
    }
};
