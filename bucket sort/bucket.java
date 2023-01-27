// bucket sort algprithm

import java.util.*;

public class bucket {
    public static void main(String[] args) {
        
    }

    void bucketsort(int items, int[] array) {
        int[] bucket = new int[items];
        for (int i = 0; i < items; i++) {
            bucket[i] = 0;
        }
        for (int i = 0; i < items; i++) {
            bucket[array[i]]++;
        }
        int outPos = 0;
        for (int i = 0; i < items; i++) {
            for (int j = 0; j < bucket[i]; j++) {
                array[outPos++] = i;
            }
        }
    }

}

