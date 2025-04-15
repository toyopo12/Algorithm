import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 3; i++) {
            int n = sc.nextInt();
            BigInteger result = BigInteger.ZERO;

            for (int j = 0; j < n; j++) {
                long x = sc.nextLong();
                result = result.add(BigInteger.valueOf(x));
            }

            if (result.compareTo(BigInteger.ZERO) > 0) {
                System.out.println("+");
            } else if (result.compareTo(BigInteger.ZERO) < 0) {
                System.out.println("-");
            } else {
                System.out.println("0");
            }
        }

        sc.close();
    }
}