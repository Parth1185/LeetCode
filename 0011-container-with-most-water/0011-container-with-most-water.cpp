class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0 ;   
        int l = 0 ; 
        int r =  height.size() -1 ; 

        while(l < r){

            if (height[l] < height[r])
                {
                    ans=max(ans,((r-l)*height[l]));
                    l++;
                }            
            else
            {
                ans=max(ans,((r-l)*height[r]));
                r-- ; 
            }
        }
        return ans ; 
    }
};