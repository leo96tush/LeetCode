class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        // Store rows and columns separately
        vector<vector<int>> rows;
        vector<vector<int>> columns;

        // Count occurrences of each row and column
        map<vector<int>, int> row_count;
        map<vector<int>, int> column_count;

        // Process rows
        for (auto row : grid) {
            rows.push_back(row);
            row_count[row]++; // Count occurrences of each row
        }    

        // Process columns
        for (int i = 0; i < grid.size(); i++) {
            vector<int> column;
            for (int j = 0; j < grid.size(); j++) {
                column.push_back(grid[j][i]); // Construct column vector
            }
            columns.push_back(column);
            column_count[column]++; // Count occurrences of each column
        }
        
        int output = 0;

        // Compare rows and columns
        for (auto count_row : row_count) {
            if (column_count[count_row.first]) {
                // If a row matches a column, multiply their occurrences
                output += count_row.second * column_count[count_row.first];
            }
        }

        return output;
    }
};