// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int l=0, r = height.size()-1, ans = 0;
//         while(l<r){

//             if(height[l]<height[r]){
//                 ans = max(ans, (r-l)*height[l]);
//                 l++;
//             }

//             else{
//                 ans = max(ans, (r-l)*height[r]);
//                 r--;
//             }
//         }
//         return ans;
//     }
// };





class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        for (int l = 0, r = height.size() - 1; l < r; ) {
            ans = max(ans, (r - l) * min(height[l], height[r]));
            
            if (height[l] < height[r]) {
                l++;  
            } else {
                r--;  
            }
        }
        return ans;
    }
};
