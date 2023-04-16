package Deadlock;

/**
 * DeadLock
 */

class A {
    synchronized void foo(B b) {
        String name = Thread.currentThread().getName();
        System.out.println(name + ": A.foo is trying to call B.last()");
        b.last();
        System.out.println(name + ": exiting A.foo()");
    }

    synchronized void last() {
        System.out.println("Inside A.last()");
    }
}

class B {
    synchronized void bar(A a) {
        String name = Thread.currentThread().getName();
        System.out.println(name + ": B.bar is trying to call A.last()");
        a.last();
        System.out.println(name + ": exiting B.bar()");
    }

    synchronized void last() {
        System.out.println("Inside B.last()");
    }
}

public class DeadLock {
    A a = new A();
    B b = new B();

    private class Thread1 implements Runnable {
        @Override
        public void run() {
            a.foo(b);
        }
    }

    private class Thread2 implements Runnable {
        @Override
        public void run() {
            b.bar(a);
        }
    }

    public static void main(String[] args) {
        DeadLock deadLock = new DeadLock();
        Thread t1 = new Thread(deadLock.new Thread1(), "Thread-1");
        Thread t2 = new Thread(deadLock.new Thread2(), "Thread-2");

        t1.start();
        t2.start();
    }
}