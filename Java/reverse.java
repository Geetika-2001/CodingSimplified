public class reverse {
    public static void main(String[] args) {
        System.out.println(rev(321));
    }

    static int rev(int n) {
        int count=0;
        if(n%10 ==n){
            return n;
        }
        count++;
        return (int) (Math.pow(10,count)*(n%10)+ rev(n/10));
    }
}
