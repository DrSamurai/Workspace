package OOPIII.EX2;

/**
 * Car
 */
public class Car {

    String carName;
    String carType;

    public Car(String name, String type) {
        this.carName = name;
        this.carType = type;
    }

    // private method
    private String getCarName() {
        return this.carName;
    }

    // inner class
    class Engine {
        String engineType;

        void setEngine() {
            // Accessing the carType property of Car
            if (Car.this.carType.equals("4WD")) {

                //Invoking method getCarName() of Car
                if (Car.this.getCarName().equals("Chrysler")) {
                    this.engineType = "Smaller";
                } else {
                    this.engineType = "Bigger";
                }
            } else {
                this.engineType = "Mid";
            }
        }
        
        String getEngineType() {
            return this.engineType;
        }
    }
}