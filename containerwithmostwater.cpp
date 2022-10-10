class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxm=INT_MIN;
     long area=INT_MIN;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            if(height[i]>=height[j])
            {
                area=(j-i)*height[j];
                maxm=area>maxm?area:maxm;
                j--;
            }
            else
            {
                area=(j-i)*height[i];
                maxm=area>maxm?area:maxm;
                i++;
            }
        }
     return maxm;
    }
};
