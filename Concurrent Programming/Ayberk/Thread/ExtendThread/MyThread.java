package Thread.ExtendThread;

/**
 * MyThread
 */
public class MyThread extends Thread {
    MyThread(String name) {
        super(name);
    }

    @Override
    public void run() {
        for (int i = 0; i < 1000000000; i++) {
            // try {
            // Thread.sleep(0);
            // System.out.println(Thread.currentThread().getName() + ": " + i);
            // } catch (InterruptedException e) {

            // }
            System.out.println(Thread.currentThread().getName() + ": " + i);

        }
    }
}