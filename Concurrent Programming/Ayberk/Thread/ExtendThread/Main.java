package Thread.ExtendThread;

/**
 * Main
 */
public class Main {
    public static void main(String[] args) {
        MyThread t1 = new MyThread("t1");
        MyThread t2 = new MyThread("\tt2");

        t1.start();
        t2.start();
    }
}