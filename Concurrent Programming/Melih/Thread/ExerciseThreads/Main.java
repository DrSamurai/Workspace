package Thread.ExerciseThreads;

import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] arr = generateRandomArray(1000);

        System.out.print("Enter thread number: ");
        int threadNo = scanner.nextInt();

        int elementsPerThread = arr.length / threadNo;
        Thread[] threads = new Thread[threadNo];

        for (int i = 0; i < threadNo; i++) {
            int start = i * elementsPerThread;
            int end = start + elementsPerThread;
            threads[i] = new ThreadedPrint("T" + i, arr, start, end);
            threads[i].start();
        }

        for (Thread t : threads) {
            try {
                t.join(); //!!!!!!
            } catch (InterruptedException e) {
               
            }
        }
    }

    static int[] generateRandomArray(int size) {
        int[] arr = new int[size];
        Random random = new Random();

        for (int i = 0; i < size; i++) {
            arr[i] = random.nextInt(size);
        }

        return arr;
    }
}
