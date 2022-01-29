public class sumofdigits {
    public static void main(String[] args) {
        System.out.println(digits(1234));
    }
    static int digits(int n){
        if(n%10==n){
            return n;
        }
        int m=n%10;
        return m+digits(n/10);
    }
}
