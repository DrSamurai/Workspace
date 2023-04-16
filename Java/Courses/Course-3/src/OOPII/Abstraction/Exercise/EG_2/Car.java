package OOPII.Abstraction.Exercise.EG_2;

public class Car extends Vehicle {
    
    Car(){

        numWheels = 4;
        vehicleType = "Car";
        maxSpeed = 200;

    }

    @Override
    public void drive() {
        System.out.println("Driving a Car at a max speed of " + maxSpeed);
        
    }


}
