import java.math.BigInteger;
import java.util.Scanner;

public class kbasedNumbers1012
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
    
        BigInteger a, b, c;
        a = BigInteger.valueOf(1);
        b = BigInteger.valueOf(k-1);
        
        for(int i = 2; i <= n; i++)
        {
            c = (a.add(b)).multiply(BigInteger.valueOf(k-1));
            a = b;
            b = c;
        }
        
        
        System.out.println(b);
    }
}