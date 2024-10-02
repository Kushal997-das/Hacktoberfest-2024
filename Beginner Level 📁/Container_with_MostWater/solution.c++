class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r= height.size()-1;
        int mx=0;
        while(l<r){
            int lh=height[l];
            int rh= height[r];
            int mn_ht =min(lh,rh);
            int len = r-l;
            int cur_ar= len*mn_ht;
            mx = max(mx,cur_ar);
            if(lh<rh) l++;
            else 
            r--;
        }
        return mx;
    }
};