package OOPII.Inheritance;

/**
 * Teacher
 */
public class Teacher extends Person {
    String department;

    Teacher(String name, int age, float salary, String department) {
        super(name, age, salary);
        this.department = department;
    }

    @Override
    void printInfo() {
        super.printInfo();
        System.out.println("Department: " + department + "\n\n");
    }
}