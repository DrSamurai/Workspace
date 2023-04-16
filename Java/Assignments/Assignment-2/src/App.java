import java.io.*;
import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {

        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter 'input' to input user details or 'output' to view user details:");
            String option = input.nextLine();

            if (option.equals("input")) {
                System.out.println("Enter your name: ");
                String name = input.nextLine();

                System.out.println("Enter your surname: ");
                String surname = input.nextLine();

                System.out.println("Enter your age: ");
                int age = input.nextInt();

                input.nextLine();

                System.out.println("Enter your country: ");
                String country = input.nextLine();

                System.out.println("Enter your address: ");
                String address = input.nextLine();

                System.out.println("Enter your phone number: ");
                String phone = input.nextLine();

                UserDetails user = new UserDetails(name, surname, age, country, address, phone);

                // Write the user details to the file
                try (BufferedWriter bw = new BufferedWriter(new FileWriter("User Details.txt", true))) {
                    bw.write(user.toString() + "\n");
                    bw.close();
                } catch (IOException e) {
                    System.out.println("There is an issue with the input." + e.getMessage());
                }
            } else if (option.equals("output")) {
                // Read the user details from the file

                // try (BufferedReader reader = new BufferedReader(new FileReader("User Details.txt"))) {
                //     String line;
                //     // try (Scanner fileInput = new Scanner(new File("User Details.txt"))) {
                //     // while (fileInput.hasNextLine()) {
                //     while ((line = reader.readLine()) != null) {
                //         System.out.println(line);

                //     }
                //     reader.close();

                //     // System.out.println(fileInput.nextLine());

                //     // String line = fileInput.nextLine();
                //     // String[] parts = line.split(",");
                //     // UserDetails user = new UserDetails(parts[0], parts[1],
                //     // Integer.parseInt(parts[2]), parts[3], parts[4], parts[5]);
                //     // System.out.println("Name: " + user.getName());
                //     // System.out.println("Surname: " + user.getSurname());
                //     // System.out.println("Age: " + user.getAge());
                //     // System.out.println("Country: " + user.getCountry());
                //     // System.out.println("Address: " + user.getAddress());
                //     // System.out.println("Phone: " + user.getPhone());

                // } catch (FileNotFoundException f) {
                //     System.out.println("File not found!" + f.getMessage());
                // }

                // Scanner fileReader = new Scanner(new File("User Details.txt"));

                // while (fileReader.hasNextLine()) {
                //     String readLine = fileReader.nextLine();

                //     String[] data = readLine.split(",");

                //     for (String x : data) {
                //         System.out.println(x);
                //     }
                //     System.out.println();
                // }
            }
        }
    }
}
