import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        // String name = "Melih";
        // int age = 20;
        // float avg = 3.8f;
        // double pi = 3.14;
        // char letter = 'M';
        // boolean gender = true;

        // System.out.println("Information of student:\n");
        // System.out.println("Name: " + name + "\nAge: " + age + "\nAvg: " + avg +
        // "\nPI: " + pi + "\nLetter: " + letter + "\nGender: " + gender);

        // Scanner scan = new Scanner(System.in);

        // System.out.print("Enter your name: ");
        // String name = scan.nextLine();

        // System.out.print("Enter your age: ");
        // int age = scan.nextInt();

        // System.out.print("Enter your avg: ");
        // float avg = scan.nextFloat();

        // System.out.println("My name is " + name);
        // System.out.println("My age is " + age);
        // System.out.println("My avg is " + avg);

        // Scanner scan = new Scanner(System.in);

        // System.out.print("Name: ");
        // String name = scan.nextLine();

        // System.out.print("Age: ");
        // int age = scan.nextInt();

        // System.out.print("GPA: ");
        // float gpa = scan.nextFloat();

        // System.out.println("\t\t\tDISPLAYING INFORMATION\n" + "NAME: " + name +
        // "\nAge: " +age + "\nGPA" + gpa);

        // Scanner scan = new Scanner(System.in);
        // System.out.print("Enter number: ");
        // int num = scan.nextInt();

        // if (num % 2 == 0) {
        // System.out.println("Number is even");
        // }
        // else{
        // System.out.println("Odd");
        // }

        // Scanner scan = new Scanner(System.in);
        // System.out.print("Enter username:");

        // String username = scan.nextLine();

        // if (username.equals("Ayberk123")) {
        // System.out.println("Access granted.");
        // }
        // else{
        // System.out.println("Wrong username!");

        // }

        /*
         * .equals() => Content comparison
         * 
         * == => Address comparison
         */

        // String s1 = "HELLO";
        // String s2 = "HELLO";
        // String s3 = new String("HELLO");

        // System.out.println(s1 == s2); // true
        // System.out.println(s1 == s3); // false

        // System.out.println(s1.equals(s2)); // true
        // System.out.println(s1.equals(s3)); // true

        // System.out.print("Enter a number between 1 and 4: ");
        // Scanner scan = new Scanner(System.in);
        // int num = scan.nextInt();

        // switch(num){
        // case 1 -> System.out.println("Summer");
        // case 2 -> System.out.println("Spring");
        // case 3 -> System.out.println("Fall");
        // case 4 -> System.out.println("Winter");
        // default -> {
        // System.out.println("Enter num betwen 1 and 4");
        // }
        // }

        // Scanner scan = new Scanner(System.in);
        // System.out.print("Enter a number: ");
        // int num = scan.nextInt();

        // // 1 x 2 x 3 x 4 x 5
        // int result = 1;
        // for (int i = 1; i <= num; i++) {
        // result = result * i;
        // }

        // System.out.println("Result = " + result);

        // Scanner scan = new Scanner(System.in);

        // System.out.print("Enter base: ");
        // int base = scan.nextInt();

        // System.out.print("Enter exp: ");
        // int exp = scan.nextInt();

        // // 2^4
        // // 2 x 2 x 2 x 2
        // int result = 1;
        // for(int i = 0; i < exp; i++){
        // result = base * result;
        // // result *= base;
        // }
        // System.out.println("Result = " + result);

        // *
        // * *
        // * * *
        // * * * *
        // * * * * *

        // for (int i = 0; i < 5; i++) {
        //     for (int index = 0; index <= i; index++) {
        //         System.out.print("* ");
        //     }
        //     System.out.println();
        // }

        // 1
        // 1 2
        // 1 2 3
        // 1 2 3 4
        // 1 2 3 4 5

        // for (int i = 1; i <= 6; i++) {
        //     for (int j = 1; j <= i-1; j++) {
        //         System.out.print(j + " ");   
        //     }
        //     System.out.println(); 
        // }

        // A
        // B B
        // C C C
        // D D D D
        // E E E E E

        // for (int i = 65; i <= 69; i++) {
        //     for (int j = 0; j <= i-65 ; j++) {
        //         System.out.print((char)i + " ");      
        //     }
        //     System.out.println();
        // }

        // * * * * *
        // * * * *
        // * * * 
        // * *
        // *

        // for (int i = 5; i >= 0; i--) {
        //     for (int j = 0; j < i; j++) {
        //         System.out.print("* ");    
        //     }
        //     System.out.println();
        // }
    }
}
