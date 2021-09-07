/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework6_26;
import java.util.Scanner;
/**
 *
 * @author yeoki
 */
public classw Homework6_26 {

   public static void main(String[] args) {

        int count = 0;
        for (int i = 0; count < 100; i++) {

            if (isPrime(i) && isPalindrome(i)) {
                System.out.print(i);
                System.out.print(" ");
                count++;
                if (count % 10 == 0 && i != 0) System.out.println();

            }

        }
    }


    public static boolean isPrime(long n) {

        if (n < 2) return false;

        for (int i = 2; i <= n / 2; i++) {

            if (n % i == 0) return false;
        }

        return true;
    }

    public static long reverse(long num) {

        long reverse = 0;
        while (num != 0) {

            reverse *= 10;
            reverse += num % 10;
            num /= 10;
        }

        return reverse;
    }

    public static boolean isPalindrome(long num) {

        return (num == reverse(num));
    }
}
