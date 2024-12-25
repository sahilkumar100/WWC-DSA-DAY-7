#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generatePascalTriangle(int numRows) {
    vector<vector<int>> triangle;

    for (int i = 0; i < numRows; ++i) {
        vector<int> row(i + 1, 1); // Create a row of size i+1, filled with 1s

        for (int j = 1; j < i; ++j) {
            // Each element is the sum of the two elements above it
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        triangle.push_back(row); // Add the row to the triangle
    }

    return triangle;
}

int main() {
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    vector<vector<int>> result = generatePascalTriangle(numRows);

    cout << "Pascal's Triangle:" << endl;
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
