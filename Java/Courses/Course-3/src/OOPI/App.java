package OOPI;
public class App {
    public static void main(String[] args) throws Exception {
        Person p1 =  new Person("Melih", 20, 10000.0f);
        Person p2 = new Person();
        Person p3 = new Person(p1);

        p1.printInfo();
        p2.printInfo();
        p3.printInfo();
    }
}
