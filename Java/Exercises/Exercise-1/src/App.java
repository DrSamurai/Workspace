public class App {

    public static boolean solution(String str, String ending) {
    
        for (int i = str.length(); i >= 0; i--) {
            for (int j = ending.length(); j >= 0; j--) {
                if(str.charAt(i) == ending.charAt(j)){
                    return true;
                
            }
            }
            }
            return false;
        }
    
    public static void main(String[] args) throws Exception {

        // solution("Samurai", "ai");
        System.out.println(solution("Samurai", "i"));


        

    }
}
