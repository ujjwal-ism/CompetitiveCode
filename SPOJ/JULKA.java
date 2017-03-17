import java.io.*;
import java.util.*;
import java.math.*;

public class JULKA {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = 10;
        while(t>0){
        BigInteger t1 = in.nextBigInteger();
        BigInteger t2 = in.nextBigInteger();
        BigInteger a = new BigInteger("2");
        t1 = t1.subtract(t2);
        t1 = t1.divide(a);
        System.out.println(t1.add(t2));
        System.out.println(t1);
        t--;
        }
    }

}