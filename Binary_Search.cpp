#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Target found
        }
        else if (nums[mid] < target) {
            left = mid + 1; // Search right half
        }
        else {
            right = mid - 1; // Search left half
        }
    }

    return -1; // Target not found
}

int main() {
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    
    int target1 = 9;
    int target2 = 2;

    cout << "Index of " << target1 << ": " << search(nums, target1) << endl;
    cout << "Index of " << target2 << ": " << search(nums, target2) << endl;

    return 0;
}