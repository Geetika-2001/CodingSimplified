public class Main {

    public static void main(String[] args) {
        System.out.println(Main.isPalindrome(1233321));
    }
    public static boolean isPalindrome(int x) {
            int reverseNum = reverse(x);
            if (reverseNum == x){
                return true;
            }else {
                return false;
            }
    }
    public static int reverse(int x) {
        int reverse = 0;
        if (x > 0) {
            while (x > 0) {
                int lastDigit = x % 10;
                reverse = (reverse * 10) + lastDigit;
                x = x / 10;
            }
        } else {
            while (x < 0) {
                int lastDigit = x % 10;
                reverse = (reverse * 10) + lastDigit;
                x = x / 10;
            }
        }

        return reverse;
    }
}
