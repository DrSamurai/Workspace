package OOPIII.Singleton;

/**
 * Database
 */
public class Database {
    private static Database instance;
    public String IP;
    // Singleton Design Patterns

    private Database(String IP) {
        this.IP = IP;
    }

    public static Database getInstance(String IP) {
        if (instance == null) {
            instance = new Database(IP);
        }
        return instance;
    }
}