package OOPII.Polymorphism;

/**
 * App
 */
public class App {

    public static void main(String[] args) {
        Animal[] animals = new Animal[] { new Dog(), new Cat(), new Dog(), new Dog(), new Cat() };

        for (Animal animal : animals) {
            animal.speak();
        }

        Animal a1 = new Dog();
        System.out.println(a1 instanceof Animal);
        System.out.println(a1 instanceof Dog);
    }
}