package OOPII.Abstraction.Course;

/**
 * Animal
 */
abstract class Animal {
    String type;
    int age;

    abstract void sleep();

    abstract void eat();

    abstract void speak();

    void die() {
        System.out.println("I am dead!");
    }
}