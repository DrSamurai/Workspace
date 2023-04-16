package OOPIII.EX1;

/**
 * Computer
 */
public class Computer {

    double price;

    /**
     * Processor
     */

    // Nested Class
    public class Processor {
        double cores;
        String manufacturer;

        double getCache() {
            return 4.3;
        }
    }

    // Protected nested class
    protected class RAM {
        double memory;
        String manufacturer;

        double getClockSpeed() {
            return 5.5;
        }
    }
}