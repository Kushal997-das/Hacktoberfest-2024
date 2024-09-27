class Solution {
    public int largestAltitude(int[] gain) {
        int sum=0,oisum=0,max=0;
        for(int i=0;i<gain.length;i++){
            if(sum>=0){
                oisum+=gain[i];
                if(oisum>max){max=oisum;}
                
            }
            else{
                sum+=gain[i];
            }
        }return max;
    }
}