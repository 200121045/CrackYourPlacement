class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        

        // int i=0;
        // int j=0;
        // for(int i =0; i<matrix.size(); i++){
        //     for(j = i; j<matrix[0].size(); j++){
        //         if(i!=j){
        //             swap(matrix[i][j], matrix[j][i]);
        //         }
        //     }
        // }

        // for(int i=0; i<matrix.size(); i++){
        //     reverse(matrix[i].begin(), matrix[i].begin());
        // }

        int i =0;
        int j =0;
        for(int i = 0; i<matrix.size(); i++){
            for(int j = i; j<matrix[0].size(); j++){
                if(i!=j){
                    swap(matrix[i][j] , matrix[j][i]);
                        }
            }
        }
        for(int i = 0; i<matrix.size(); i++){
            reverse(matrix[i].begin() , matrix[i].end());
        }
        
    }
};
