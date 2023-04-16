package OOPII.Encapsulation;

public class Person {
    private String name;  //static?
    private int age;

    Person(String name, int age){
        this.name = name;
        this.age = age;
    }

    public void setName(String name){
        this.name = name;
    }

    public String getName(){
        return name;
    }

    public void setAge(int newAge){
        age = newAge;
    }

    public int getAge(){
        return age;
    }
}
