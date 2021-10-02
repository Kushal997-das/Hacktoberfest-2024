import java.util.*;

public class solution{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();

        int[][] arr = new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        spiral(arr,m,n);
    }
    static void spiral(int[][] arr,int m,int n){
        int i;
        int start_column=0,start_row=0,end_column=m-1,end_row=n-1;
        StringBuilder str = new StringBuilder();
        while(start_row<=end_row && start_column<=end_column){
            for(i=start_column;i<=end_column;i++)
                str.append(arr[start_row][i]+" ");
            start_row++;

            for(i=start_row;i<=end_row;i++)
                str.append(arr[i][end_column]+" ");
            end_column--;

            if(start_row<=end_row){
                for(i=end_column;i>=start_row;i--)
                    str.append(arr[i][start_column]+" ");
                end_row--;
            }
            if(start_column<=start_row){
                for(i=end_row;i>=start_column;i--)
                    str.append(arr[i][start_column]+" ");
                start_column++;
            }
        }
        System.out.println(str);
    }
}
