class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int suml =0;
        for(int i =0; i<=k-1; i++){
            suml+=cp[i];

        }
        int maxi =suml;
        int rights =0;
        int f = cp.size()-1;
        for(int i = k-1; i>=0;i--){
            suml = suml - cp[i];
            rights = rights + cp[f];
             f--;
            maxi = max(maxi , suml+rights);
            
        }
        return maxi;


    }
};
