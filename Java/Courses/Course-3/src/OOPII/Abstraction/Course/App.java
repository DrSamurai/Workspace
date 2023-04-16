package OOPII.Abstraction.Course;

/**
 * App
 */
public class App {

    public static void main(String[] args) {
        Dog dog = new Dog();
        Cat cat = new Cat();

        dog.eat();
        cat.eat();

        dog.sleep();
        cat.sleep();

        dog.speak();
        cat.speak();

        dog.die();
        cat.die();
    }
}