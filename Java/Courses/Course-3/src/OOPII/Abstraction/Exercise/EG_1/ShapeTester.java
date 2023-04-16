package OOPII.Abstraction.Exercise.EG_1;

public class ShapeTester {

    public static void main(String[] args) {

        Sphere sphere = new Sphere(2.5);

        Cuboid cuboid = new Cuboid(2, 3, 4);

        System.out.println(sphere.calculateSurfaceArea());
        System.out.println(sphere.calculateVolume());
        System.out.println(cuboid.calculateSurfaceArea());
        System.out.println(cuboid.calculateVolume());

    }

}
