import java.util.*;
public class bublesort {
    public static void main(String[] args) {
        int[] values = { 5, 1, 4, 2, 8 };
        bubblesort(values, values.length);
        for (int i = 0; i < values.length; i++) {
            System.out.println(values[i]);
        }
    }
    public static void bubblesort(int values[], int length) {
        boolean swapped = true;
        int i = 0;
        do {
            swapped = false;
            for (i = 0; i < length - 1; i++) {
                if (values[i] > values[i + 1]) {
                    int temp = values[i];
                    values[i] = values[i + 1];
                    values[i + 1] = temp;
                    swapped = true;
                }
            }
        } while (swapped);
    }
}

