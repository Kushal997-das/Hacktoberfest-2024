import java.util.*;
import java.io.*;

class MergeSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the input Array:");
        String[] inputString = sc.nextLine().split(" ");
        int n = inputString.length;
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.valueOf(inputString[i]);
        }

        Solution obj = new Solution();
        obj.mergeSort(arr, 0, n - 1);
        System.out.print("The sorted array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}

class Solution {
    void merge(int[] arr, int low, int mid, int high) {
        int[] temp = new int[high - low + 1];
        int i = low;
        int j = mid + 1;
        int ind = 0;

        while (i <= mid && j <= high) {
            if (arr[i] <= arr[j]) {
                temp[ind] = arr[i];
                i++;
                ind++;
            } else {
                temp[ind] = arr[j];
                j++;
                ind++;
            }
        }
        while (i <= mid) {
            temp[ind] = arr[i];
            i++;
            ind++;
        }
        while (j <= high) {
            temp[ind] = arr[j];
            j++;
            ind++;
        }

        for (i = 0; i <= high - low; i++) {
            arr[i + low] = temp[i];
        }
    }

    void mergeSort(int[] arr, int low, int high) {
        if (low == high) {
            return;
        }

        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}