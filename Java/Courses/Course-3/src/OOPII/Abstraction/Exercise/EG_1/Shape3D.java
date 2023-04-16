package OOPII.Abstraction.Exercise.EG_1;

abstract class Shape3D {
    protected double volume;
    protected double surfaceArea;

    abstract public double calculateSurfaceArea();

    abstract public double calculateVolume();

    abstract public String displayShapeType();

}
