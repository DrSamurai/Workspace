package OOPIII.EX3;

class Motherboard {
    String model;

    public Motherboard(String model) {
        this.model = model;
    }

    // static class USB {
    // int usb2 = 2;
    // int usb3 = 1;

    // int getTotalPorts() {
    // if (Motherboard.this.model.equals("MSI")) {
    // return 4;
    // }
    // else{
    // return usb2 + usb3;
    // }
    // }
    // }
}

/**
 * Main
 */
public class Main {
    public static void main(String[] args) {
        // Motherboard.USB usb = new Motherboard.USB();
        // System.out.println("Total Ports: " + usb.getTotalPorts());
    }
}