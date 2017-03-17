import java.io.*;
import java.util.*;
import java.math.*;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t>0){
        int n = in.nextInt();
        BigInteger t1 = BigInteger.valueOf(n);
        BigInteger t2 = BigInteger.valueOf(n-1);
        BigInteger temp = new BigInteger("0");
        
        while(n>1){
            t1 = t1.multiply(t2);
            n--;
            t2 = BigInteger.valueOf(n-1);
        }
        System.out.println(t1);
        t--;
        }
    }

}