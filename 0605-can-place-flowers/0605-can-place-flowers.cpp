class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s=flowerbed.size();
        if(n==0) return true;
        if(s==1) return (flowerbed[0]==0 && n==1);
        for(int i=0;i<s;i++)
        {
            if(flowerbed[i]==0)
            {
                    if(i==0 && flowerbed[i+1]==0)
                    {
                        flowerbed[i]=1;
                        n--;
                    }
                    else if(i==s-1 && flowerbed[i-1]==0)
                    {
                        flowerbed[i]=1;
                        n--;
                    }
                    else if(i>0 && i<s-1 && flowerbed[i-1]==0 && flowerbed[i+1]==0 )
                    {
                        flowerbed[i]=1;
                        n--;
                    }
                    if(n==0)
                    {
                        return true;
                    }
            }
        }
            return n==0;
    }     
};