package OOPII.Abstraction.Exercise.EG_2;

public class VehicleTester {
    public static void main(String[] args) {
        Car car = new Car();
        car.drive();
        car.displayVehicleType();
        car.displayNumWheels();

        Motorcycle motorcycle = new Motorcycle();
        motorcycle.drive();
        motorcycle.displayVehicleType();
        motorcycle.displayNumWheels();
    }
}

