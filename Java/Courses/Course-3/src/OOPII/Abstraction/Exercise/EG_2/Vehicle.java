package OOPII.Abstraction.Exercise.EG_2;

abstract class Vehicle {

    protected int numWheels;
    protected String vehicleType;
    protected double maxSpeed;

    public abstract void drive();

    public void displayNumWheels() {
        System.out.println("Number of wheels: " + numWheels);
    }

    public void displayVehicleType(){
        System.out.println("Type: "+ vehicleType);
    }

    

}
