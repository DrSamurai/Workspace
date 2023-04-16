package ProducerConsumerThreadUnsafe;

import java.util.LinkedList;

/**
 * ProducerConsumer
 */
public class ProducerConsumer {

    public static void main(String[] args) throws InterruptedException {
        LinkedList<Integer> sharedBuffer = new LinkedList<>();
        Thread producer = new Thread(new Producer(sharedBuffer, 2));
        Thread consumer = new Thread(new Consumer(sharedBuffer, 2));

        producer.start();
        consumer.start();

        producer.join();
        consumer.join();
    }
}

/**
 * Producer
 */
class Producer implements Runnable {
    LinkedList<Integer> sharedBuffer;
    int capacity;

    Producer(LinkedList<Integer> sharedBuffer, int capacity) {
        this.capacity = capacity;
        this.sharedBuffer = sharedBuffer;
    }

    @Override
    public void run() {
        int value = 0;
        while (true) {
            while (sharedBuffer.size() >= capacity)
                ;

            System.out.println(Thread.currentThread().getName() + ": produced " + value);
            sharedBuffer.add(value);
            value++;
        }
    }
}

class Consumer implements Runnable {
    LinkedList<Integer> sharedBuffer;
    int capacity;

    Consumer(LinkedList<Integer> sharedBuffer, int capacity) {
        this.sharedBuffer = sharedBuffer;
        this.capacity = capacity;
    }

    @Override
    public void run() {
        // TODO Auto-generated method stub
        while(true){
            while(sharedBuffer.size() == 0);
            int value = sharedBuffer.poll();
            System.out.println(Thread.currentThread().getName() + ": consumed " + value);
        }
    }
}