// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int i = 0; 
//         int n = nums.size(); 
//         for (int j = 0; j < n; j++) { 
//             if (j == 0 || nums[j] != nums[i - 1]) {
//                 nums[i] = nums[j]; 
//                 i++; 
//             }
//         }
//         return i; 
//     }
// };

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;  
        int j = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1;  
    }
};
