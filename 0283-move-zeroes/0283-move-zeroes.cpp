class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; // Tracks the next position to place a non-zero element
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int i = 0; // Tracks the next position to place a non-zero element
//         for (int j = 0; j < nums.size(); j++) {
//             if (nums[j] != 0) {
//                 nums[i] = nums[j]; // Place the non-zero element at index `i`
//                 i++;               // Move the pointer for the next non-zero element
//             }
//         }
//         // Fill the rest of the array with zeroes
//         for (; i < nums.size(); i++) {
//             nums[i] = 0;
//         }
//     }
// };
