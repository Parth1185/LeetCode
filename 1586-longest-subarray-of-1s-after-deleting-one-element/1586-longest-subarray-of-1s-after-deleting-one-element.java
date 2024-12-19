class Solution {
    public int longestSubarray(int[] nums) {
        int i=0,j=0, midz=-1, ans=0;
        while(j<nums.length){
            if(nums[j]==0){
                ans =Math.max(ans,j-i-1);
                i=midz+1;
                midz=j;
            }
            j++;
        }
        ans = Math.max(ans, j-i-1);
        return ans;
    }
}