class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans="";
        bool flag = true;
        for(int i =0; i<strs[0].size(); i++){

            auto m = strs[0][i];
            for(int j = 1; j<strs.size(); j++){
               if(strs[j][i]!=m){
                flag = false;
                break;
               }
            }
            if(flag==false){
                break;
            }
            else{
                ans+=m;
            }
        }

return ans;









    }
};
