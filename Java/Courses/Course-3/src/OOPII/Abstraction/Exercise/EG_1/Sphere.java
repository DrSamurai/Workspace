package OOPII.Abstraction.Exercise.EG_1;


public class Sphere extends Shape3D {
    private double radius;

    Sphere(double radius){
        this.radius = radius;
    }

    @Override
    public double calculateSurfaceArea() {
        double surfaceArea = 4 * Math.PI * Math.pow(radius, 2);
        

        return surfaceArea;
    }

    @Override
    public double calculateVolume() {
        double volume = (4.0/3.0) * Math.PI * Math.pow(radius, 3);

        return volume;
    }

    @Override
    public String displayShapeType() {
        return "Sphere";
    }
}
