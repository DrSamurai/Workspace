package OOPII.Abstraction.Course;

/**
 * Dog
 */
public class Dog extends Animal {
    @Override
    void speak() {
        // TODO Auto-generated method stub
        System.out.println("Woof Woof!");
    }

    @Override
    void eat() {
        // TODO Auto-generated method stub
        System.out.println("I eat dog food!");
    }

    @Override
    void sleep() {
        // TODO Auto-generated method stub
        System.out.println("Dog sleeps 10 hrs a day!");
    }
}