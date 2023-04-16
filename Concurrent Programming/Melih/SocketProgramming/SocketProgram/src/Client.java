import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;
import java.util.Random;

import javax.lang.model.util.ElementScanner14;

public class Client {
    private Socket socket = null;
    private DataInputStream input = null;
    private DataOutputStream out = null;

    public Client(String address, int port) {
        try {
            socket = new Socket(address, port);
            System.out.println("Connected!");

            // takes input from terminal
            System.out.print("Input: ");
            input = new DataInputStream(System.in);

            // sends output to the socket
            out = new DataOutputStream(socket.getOutputStream());
        } catch (IOException e) {
            e.printStackTrace();
        }

        String line = "";

        while (!line.equals("Over")) {
            try {
                line = input.readLine();
                String ciphered = cipher(line);
                out.writeUTF(ciphered);
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

        try {
            input.close();
            out.close();
            socket.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private String cipher(String line) {
        Random random = new Random();
        int randomInt = random.nextInt(1, 26);
        String cipheredText = "" + (char)(randomInt + 64); // Add the shift value as the first character

        char[] charArray = line.toCharArray();

        for (int i = 0; i < charArray.length; i++) {
            char currentChar = charArray[i];
            char cipheredChar = (char)(currentChar + randomInt);
            

            if ('A' <= currentChar && currentChar <= 'Z') {
                if (cipheredChar > 90)
                    cipheredChar -= 26;
            } else if ('a' <= currentChar && currentChar <= 'z') {
                if (cipheredChar > 122)
                    cipheredChar -= 26;
            }

            cipheredText += cipheredChar;
        }

        return cipheredText;
    }

    public static void main(String[] args) {
        new Client("127.0.0.1", 5001);
    }
}
