class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        unordered_set<int> min_row;
        unordered_set<int> max_col;
        vector<int> res;

        // construct min_row
        for (int i = 0; i < matrix.size(); i++) {
            min_row.insert(*min_element(matrix[i].begin(), matrix[i].end()));
        }

        // construct max_col
        for (int i = 0; i < matrix[0].size(); i++) {
            int ma = matrix[0][i];
            for (int j = 1; j < matrix.size(); j++) {
                ma = max(ma, matrix[j][i]);
            }
            max_col.insert(ma);
        }

        // construct res
        for (auto mi : min_row) {
            if (max_col.count(mi)) {
                res.push_back(mi);
            }
        }
        return res;
    }
};
