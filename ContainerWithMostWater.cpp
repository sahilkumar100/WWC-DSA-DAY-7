#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1; // Two pointers
    int maxArea = 0;

    while (left < right) {
        // Calculate the area between the two pointers
        int width = right - left;
        int currentHeight = min(height[left], height[right]);
        int currentArea = width * currentHeight;

        // Update the maximum area
        maxArea = max(maxArea, currentArea);

        // Move the pointer pointing to the smaller height
        if (height[left] < height[right]) {
            ++left;
        } else {
            --right;
        }
    }

    return maxArea;
}

int main() {
    int n;
    cout << "Enter the number of heights: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter the heights: ";
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
    }

    cout << "Maximum water the container can store: " << maxArea(height) << endl;
    return 0;
}
