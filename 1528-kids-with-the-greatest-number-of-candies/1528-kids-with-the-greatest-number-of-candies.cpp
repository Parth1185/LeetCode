class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int n=candies.size();
        vector<bool>result(n,false);
        int maxc=candies[0];
        for(int i=0;i<n;i++)
        {
            if(candies[i]>maxc)
            {
                maxc=candies[i];
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     maxc = max(maxc,candies[i]);
        // }

        //or

        // maxc = max_element(candies.begin(), candies.end());

        for(int i=0;i<n;i++)
        {
            if((candies[i]+extraCandies)>=maxc)
            result[i]=true;
        }
        return result;
    }
};