public class Palindrome {
    public static void main(String[] args) {
        String value = "madam"; // Replace word for check Palindrome
        int i = 0;
        if (i < value.length() / 2) {
            if (value.charAt(i) == value.charAt(value.length() - 1)) {
                System.out.print("Palindrome");
            } else {
                System.out.print("Not Palindrome");
            }
        }
    }
}
