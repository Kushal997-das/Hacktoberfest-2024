class Solution {
public:
    int rob(vector<int>& nums) {
       int n=nums.size();
       int prev1=nums[0];
       if(n==1)return prev1;
       int prev2=max(nums[0],nums[1]);
       if(n==2)return prev2;
       for(int i=2;i<n;i++){
            int curr=max(prev1+nums[i],prev2);
            prev1=prev2;
            prev2=curr;
       }
       return prev2; 
    }
};