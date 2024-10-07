class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(char c:t){
            mp[c]++;
        }
        int left=0,right=0,cnt=0,startIdx=-1,minLen=INT_MAX;
        while(right<s.size()){
            if(mp[s[right]]>0)cnt++;
            mp[s[right]]--;
            while(cnt==t.size()){
                if(right-left+1<minLen){
                    minLen=right-left+1;
                    startIdx=left;
                }
                mp[s[left]]++;
                if(mp[s[left]]>0)cnt--;
                left++;
            }
            right++;
        }
        return startIdx==-1?"":s.substr(startIdx,minLen);
    }
};