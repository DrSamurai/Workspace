/**
 * Person
 */
package OOPI;

public class Person {
    // Attributes
    String name;
    int age;
    float salary;

    // Constructors
    
    Person(String name, int age, float salary){
        this.name = name;
        this.age = age;
        this.salary = salary;
    }

    Person(){
        this.name = "n/a";
        this.age = 0;
        this.salary = 0.0f;
    }

    Person(Person obj){
        this.name = obj.name;
        this.age = obj.age;
        this.salary = obj.salary;
        
    }


    void printInfo(){
        System.out.println("Name: " + name + "\nAge: " + age + "\nSalary: "+ salary +"\n");
    }
}