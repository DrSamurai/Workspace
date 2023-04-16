package Thread.ImplementRunnable;

public class MyRunnable implements Runnable {
    private String name;

    MyRunnable(String name) {
        this.name = name;
    }

    @Override
    public void run() {
        for (int i = 0; i < 1000000000; i++) {
            System.out.println(name + ": " + i);
        }

    }

}
