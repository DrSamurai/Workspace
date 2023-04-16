package Thread.ExerciseThreads;

public class ThreadedPrint extends Thread {

    int[] arr;
    int start;
    int end;

    ThreadedPrint(String name, int[] arr, int start, int end) {
        super(name);
        this.arr = arr;
        this.start = start;
        this.end = end;
    }

    @Override
    public void run() {
        for (int i = start; i < end; i++) {
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                // TODO Auto-generated catch block
        
            }
            System.out.println(Thread.currentThread().getName() + " ==== " + "Array[" + i + "]: " + arr[i]);
        }
    }
}
