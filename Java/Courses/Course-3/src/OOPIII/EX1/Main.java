package OOPIII.EX1;

/**
 * Main
 */
public class Main {

    public static void main(String[] args) {
        Computer computer = new Computer();
        Computer.Processor processor = computer.new Processor();
        Computer.RAM ram = computer.new RAM();

        System.out.println("Processor Cache: " + processor.getCache());
        System.out.println("Ram Clock Speed: " + ram.getClockSpeed());
    }
}