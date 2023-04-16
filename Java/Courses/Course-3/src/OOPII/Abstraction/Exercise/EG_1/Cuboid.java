package OOPII.Abstraction.Exercise.EG_1;

public class Cuboid extends Shape3D {

    private double length;
    private double height;
    private double width;

    Cuboid(double length, double height, double width) {
        this.height = height;
        this.length = length;
        this.width = width;
    }

    @Override
    public double calculateSurfaceArea() {
        double surfaceArea = 2 * ((width * height) + (height * length) + (length + width));
        return surfaceArea;

    }

    @Override
    public double calculateVolume() {
        double volume = width * height * length;

        return volume;
    }

    @Override
    public String displayShapeType() {

        return "Cuboid";
    }

}
