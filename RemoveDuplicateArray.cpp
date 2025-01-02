// Q.> Code to Remove Duplicates from a Sorted Array



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle empty array case

        int insertIndex = 1; // Start from the second position

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] != nums[i]) { // Check for unique element
                nums[insertIndex] = nums[i]; // Move unique element forward
                insertIndex++;
            }
        }
        return insertIndex; // Return the length of unique elements
    }
};

// Main function for testing

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};

    int length = solution.removeDuplicates(nums);

    cout << "Length of unique elements: " << length << endl;
    cout << "Modified array: ";
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}




