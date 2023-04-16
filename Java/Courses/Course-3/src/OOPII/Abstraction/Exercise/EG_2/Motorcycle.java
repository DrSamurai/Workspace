package OOPII.Abstraction.Exercise.EG_2;

/**
 * Motorcycle
 */
public class Motorcycle extends Vehicle {

    Motorcycle(){
        numWheels = 2;
        vehicleType = "Motorcycle";
        maxSpeed = 140;

    }

    @Override
    public void drive() {
        System.out.println("Driving a motorcycle at a max spped of " + maxSpeed);
        
    }

    
}