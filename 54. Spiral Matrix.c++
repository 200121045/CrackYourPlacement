class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int>v;
         int n = matrix.size();
         int m = matrix[0].size();
         int left =0;
         int right = m-1;
         int top=0;
         int down = n-1;
         while(top<=down && left<=right){
             for(int i = left; i<=right; i++){
                  v.push_back(matrix[top][i]);
             }
             if(top>=down){
                 break;
             }
             top++;
             for(int i = top;i<=down; i++){
                v.push_back(matrix[i][right]);
             }
             right--;
         if(left>right){
             break;
         }
             for(int i = right; i>=left; i--){
                  v.push_back(matrix[down][i]);
             }
             down--;
              for(int i = down; i>=top; i--){
                  v.push_back(matrix[i][left]);
             }
            left++;
 
         }
         return v;

    }
};
