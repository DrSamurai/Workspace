import java.util.Scanner;

public class App {
    // How do you create a method in Java that takes a string and returns the number
    // of vowels in it?
    // static int vowelCounter(String str) {
    // String testString = str.toLowerCase();
    // int counter = 0;
    // for (int i = 0; i < str.length(); i++) {
    // char ch = testString.charAt(i);
    // if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    // counter++;
    // }
    // }
    // return counter;

    // }

    // How do you create a method in Java that takes a string and returns a new
    // string with all the characters in reverse order?

    // static String reverseString(String str) {
    // String temp = "";
    // for (int i = 0; i < str.length(); i++) {
    // temp += str.charAt(str.length()-i-1);
    // }

    // return temp;
    // }

    // How do you create a method in Java that takes a string and returns a new
    // string with the first letter of each word capitalized?

    // "Melih Bu Sabah Saat 8 De Uyandı."

    // static String capitalizeString(String str) {
    // String[] words = str.split(" ");

    // for (int i = 0; i < words.length; i++) {
    // String currentWord = "";
    // if (122 >= words[i].charAt(0) && words[i].charAt(0) >= 97) {
    // currentWord += String.valueOf(words[i].charAt(0)).toUpperCase();
    // // currentWord += (char)(words[i].charAt(0) - 32);
    // for (int index = 1; index < words[i].length(); index++) {
    // currentWord += words[i].charAt(index);
    // }
    // } else {
    // currentWord = words[i];
    // }
    // words[i] = currentWord;
    // }

    // String ans = "";

    // for (String string : words) {
    // ans += string + " ";
    // }

    // return ans;
    // }
    


    public static int[] twoSum(int[] nums, int target) {

        int[] ans = {};

        for (int i = 0; i < nums.length; i++) {
            for (int j = i+1 ; j < nums.length; j++) {
             if(nums[i]+nums[j] == target){
                
                return new int[] { i,j };


             }   
            }
            }
        }



    }

    /*
     * Given an array of integers nums and an integer target, return indices of the
     * two numbers such that they add up to target.
     * 
     * You may assume that each input would have exactly one solution, and you may
     * not use the same element twice.
     * 
     * You can return the answer in any order.
     * 
     * 
     * 
     * Example 1:
     * 
     * Input: nums = [2,7,11,15], target = 9
     * Output: [0,1]
     * Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
     * Example 2:
     * 
     * Input: nums = [3,2,4], target = 6
     * Output: [1,2]
     * Example 3:
     * 
     * Input: nums = [3,3], target = 6
     * Output: [0,1]
     * 
     * 
     * Constraints:
     * 
     * 2 <= nums.length <= 104
     * -109 <= nums[i] <= 109
     * -109 <= target <= 109
     * Only one valid answer exists.
     */

    // public static int[] twoSum(int[] nums, int target) {
    //     for (int i = 0; i < nums.length; i++) {
    //         for (int j = i + 1; j < nums.length; j++) {
    //             if (nums[i] + nums[j] == target) {
    //                 return new int[] { i, j };
    //             }                
    //         }
    //     }
        
    //     return new int[] { -1, -1};
        
    // }

    public static void main(String[] args) throws Exception {
        // int[] arr = new int[5];
        // Define an array of integers that has N numbers in it. Ask user to fill that
        // array and then find the min and max of that array.

        // Scanner scan = new Scanner(System.in);

        // int num;

        // System.out.print("Enter number: ");
        // num = scan.nextInt();

        // int[] arr = new int[num];

        // for (int i = 0; i < num; i++) {
        // System.out.print("Enter number # " + i + ":");
        // arr[i] = scan.nextInt();
        // }

        // int min = arr[0], max = arr[0];
        // float avg;
        // int sum = 0;

        // for (int i = 0; i < arr.length; i++) {
        // if(arr[i] < min){
        // min = arr[i];
        // }

        // if(arr[i] > max){
        // max = arr[i];
        // }

        // sum += arr[i];

        // }

        // avg = (float)sum / arr.length;

        // System.out.println("Average: " + avg + "\nMinimum: " + min + "\nMaximum: " +
        // max);

        // System.out.println(vowelCounter("Ayb5£#½erk _ me$£#½lih!"));

        // System.out.println(reverseString("MELIH"));

        // System.out.println(capitalizeString("Melih bu sabah 8 de uyandi."));
    }
}
