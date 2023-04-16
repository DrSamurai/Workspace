package Thread.ImplementRunnable;

public class Main {

    public static void main(String[] args) {

        MyRunnable r1 = new MyRunnable("r1");
        MyRunnable r2 = new MyRunnable("r2");

        Thread thread1 = new Thread(new MyRunnable("r1"));
        Thread thread2 = new Thread(r2);

        thread1.start();
        thread2.start();

    }
}