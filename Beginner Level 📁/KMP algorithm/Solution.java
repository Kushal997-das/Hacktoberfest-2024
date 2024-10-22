class Solution{
    public static void main(String args[]){
        KMP obj = new KMP();
        int a = obj.lps("ABCDABCDAACBDABCD");
        System.out.println("The longest prefix suffix is : "+a);
    }
}

class KMP{
   int lps(String str){
    int n = str.length();
    int pre = 0;
    int suf = 1;
    char s[] = str.toCharArray();
    int arr[] = new int[n];

    while(suf<n){
        if(s[pre]==s[suf]){
            arr[suf] = pre+1;
            pre++;
            suf++;
        }
        else{
            if(pre == 0){
                arr[suf] = 0;
                suf++;
            }
            else{
                pre = arr[pre-1];
            }
        }
    }
    return arr[n-1];
   }
}