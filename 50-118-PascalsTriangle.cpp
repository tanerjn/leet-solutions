class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> triangle;
    
    // Base case: numRows = 0
    if (numRows == 0) {
        return triangle;
    }
    
    // Initialize the first row with a single element 1
    triangle.push_back({1});
    
    // Generate the subsequent rows
    for (int i = 1; i < numRows; ++i) {
        std::vector<int> row;
        row.push_back(1); // The first element of each row is always 1
        
        // Generate the elements in the middle of the row
        for (int j = 1; j < i; ++j) {
            row.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
        }
        
        row.push_back(1); // The last element of each row is always 1
        
        // Add the generated row to the triangle
        triangle.push_back(row);
    }
    
    return triangle;
    }
};
