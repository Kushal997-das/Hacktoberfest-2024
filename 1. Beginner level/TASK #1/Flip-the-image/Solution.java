package vaishnav.vipul;

import java.util.Arrays;

public class solution {

    public static void main(String[] args) {
        int[][] nums = { { 1, 1, 0 }, { 1, 0, 1 }, { 0, 0, 0 } };

        int[][] outputArr = flipImage(nums);
        for (int[] ints : outputArr) {
            System.out.println(Arrays.toString(ints));
        }
    }

    public static int[][] flipImage(int[][] image) {
        int[][] output = new int[image.length][];

        for (int i = 0; i < image.length; i++) {
            output[i] = reverseAndInvert(image[i]);
        }

        return output;
    }

    public static int[] reverseAndInvert(int[] arr) {
        int[] output = new int[arr.length];

        for (int i = 0; i < output.length; i++) {
            output[i] = arr[arr.length - (i + 1)] == 1 ? 0 : 1;
        }

        return output;
    }
}
