public class buyAndSellStocksOneTransaction {
    public static void main(String[] args) {
        int n = 10;
        int[] arr = { 4, 2, 8, 1, 8, 9, 5, 10, 11, 12 };
        int lsf = Integer.MAX_VALUE;
        int op = 0;
        int pt = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < lsf) {
                lsf = arr[i];
            }
            pt = arr[i] - lsf;
            op = Math.max(op, pt);
        }
        System.out.println(op);
    }
}
