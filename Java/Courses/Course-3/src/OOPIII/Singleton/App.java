package OOPIII.Singleton;

/**
 * App
 */
public class App {

    public static void main(String[] args) {
        Database database1 = Database.getInstance("111");
        System.out.println(database1.IP);

        Database database2 = Database.getInstance("222");
        System.out.println(database2.IP);
    }
}