import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;


class Solution {
    public static void main(String[] args) {
        Scanner in= new Scanner(System.in);
        int n=in.nextInt();
        int positive=0;
        int negative=0;
        int zero=0;
        int i;

        for(i=0; i<n; i++){
            int x=in.nextInt();
            if(x>0){
                positive++;
            }else if(x<0){
                negative++;
            }else{
                zero++;
            }
        }

        System.out.printf("%.6f",positive/(double)n);
        System.out.printf("%.6f",negative/(double)n);
        System.out.printf("%.6f",zero/(double)n);
    }
}
