#User function Template for python3

class Solution:
    def beautySum(self, s: str) -> int:
        beauty=0
        for i in range(len(s)-2):
            Freq={}
            for j in range(i,len(s)):
                Freq.setdefault(s[j],0)
                Freq[s[j]]+=1
                beauty+=max(Freq.values())-min(Freq.values())
        return beauty


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        ob = Solution()
        print(ob.beautySum(s))
# } Driver Code Ends