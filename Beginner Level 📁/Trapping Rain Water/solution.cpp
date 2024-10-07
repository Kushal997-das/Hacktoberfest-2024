class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftMax=0,rightMax=0;
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            if(height[i]<height[j]){
                if(height[i]>leftMax)leftMax=height[i];
                else ans+=(leftMax-height[i]);
                i++;
            }else {
                if(height[j]>rightMax)rightMax=height[j];
                else ans+=(rightMax-height[j]);
                j--;
            }
        }
        return ans;
    }
};