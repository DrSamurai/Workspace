package OOPIII.EX2;

/**
 * App
 */
public class App {

    public static void main(String[] args) {
        Car car1 = new Car("Mazda", "8WD");
        Car.Engine engine = car1.new Engine();
        engine.setEngine();
        System.out.println("Engine type of 8WD = " + engine.getEngineType());


        Car car2 = new Car("Chrysler", "4WD");
        Car.Engine engine2 = car2.new Engine();
        engine2.setEngine();
        System.out.println("Engine type of 4WD = " + engine2.getEngineType());
    }
}