import java.io.*;
class Lab3_4 {
    public static void main(String[] args)throws IOException {
        int number = 0;
        int sum = 0;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        for (int i = 0; i < 10; i++) {
            System.out.println("Please Enter" + i + "Number");// Reads the Number using ‘br’ instance field
            number = Integer.parseInt(br.readLine());
            sum += number;
        }
        System.out.println("Sum =" + sum);
    }
}