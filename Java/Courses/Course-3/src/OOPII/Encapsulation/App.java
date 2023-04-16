package OOPII.Encapsulation;

/**
 * App
 */
public class App {
    public static void main(String[] args) {
        Person p1 = new Person("Ayberk", 23); // static??

        p1.setAge(20);
        System.out.println("Age: " + p1.getAge());

        p1.setName("Melih");
        System.out.println("Name: " + p1.getName());
    }
}