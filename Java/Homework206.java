import java.util.Scanner;

/* CST 2019 YEO KING*/

public class Homework2o6 {

 public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Enter a number between 0 and 1000: ");
        int num = input.nextInt();

        int firstD = num % 10;
        int remainderN = num / 10;
        int secondD = remainderN % 10;
        remainderN = remainderN / 10;
        int thirdD = remainderN % 10;

        int sum = thirdD + secondD + firstD;

        System.out.println("The sum of the digits is " + sum +".");


    }
}