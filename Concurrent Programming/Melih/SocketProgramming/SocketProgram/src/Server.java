import java.io.BufferedInputStream;
import java.io.DataInputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Random;


public class Server {
    private Socket socket = null;
    private ServerSocket server = null;
    private DataInputStream in = null;

    public Server(int port) {
        try {
            server = new ServerSocket(port);
            System.out.println("Server Started! Waiting for client requests!");
            socket = server.accept();
            System.out.println("Client Accepted!");

            in = new DataInputStream(new BufferedInputStream(socket.getInputStream()));

            String line = "";

            while (!line.equals("Over")) {
                line = in.readUTF();
                System.out.println("Clients says: " + line);
                System.out.println("Decrypted: " + decipher(line));
            }
            System.out.println("Closing Connection!");
            socket.close();
            in.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private String decipher(String line) {
        int randomInt = line.charAt(0) - 64;
        String decipheredText = "";
        char[] charArray = line.substring(1).toCharArray();

        for (int i = 0; i < charArray.length; i++) {
            char currentChar = charArray[i];
            char decipheredChar = (char)(currentChar - randomInt);
            

            if ('A' <= currentChar && currentChar <= 'Z') {
                if (decipheredChar < 65)
                    decipheredChar += 26;
            } else if ('a' <= currentChar && currentChar <= 'z') {
                if (decipheredChar < 97)
                    decipheredChar += 26;
            }

            decipheredText += decipheredChar;
        }

        return decipheredText;
    }

    public static void main(String[] args) {
        new Server(5001);
    }
}
