class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
    unordered_map<string, int> rowCount;
    int n = matrix.size();
    
    for (int i = 0; i < n; i++) {
        string row = "";
        for (int j = 0; j < matrix[i].size(); j++) {
            row += to_string(matrix[i][j]);
        }

        string flippedRow = "";
        for (int j = 0; j < matrix[i].size(); j++) {
            flippedRow += to_string(1 - matrix[i][j]);
        }
        rowCount[row]++;
        rowCount[flippedRow]++;
    }

    int maxRows = 0;
    for (auto& entry : rowCount) {
        maxRows = max(maxRows, entry.second);
    }

    return maxRows;
}
};