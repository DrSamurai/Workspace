package OOPII.Abstraction.Course;


/**
 * Cat
 */
public class Cat extends Animal{
    @Override
    void eat() {
        System.out.println("I eat cat food!");
    }

    @Override
    void sleep() {
        // TODO Auto-generated method stub
        System.out.println("Cat sleeps 5 hrs a day!");
    }
    
    @Override
    void speak() {
        // TODO Auto-generated method stub
        System.out.println("Meow Meow!");
    }
}