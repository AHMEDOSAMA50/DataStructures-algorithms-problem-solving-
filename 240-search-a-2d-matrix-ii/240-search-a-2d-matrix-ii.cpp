class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    int row = 0;
    int col = matrix[row].size() - 1;
    while (row < matrix.size() && col >= 0) {
        if (matrix[row][col] == target) {
            return true;
        }
 
        // Target lies in further row
        if (matrix[row][col] < target) {
            row++;
        }
        // Target lies in previous column
        else {
            col--;
        }
    }
    return false;

    }
};
      