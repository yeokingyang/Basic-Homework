import java.util.Scanner;
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author yeoking
 */
public class Homework3o8 {

 public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		
		System.out.print("Enter three integers: ");
		int num1 = input.nextInt();
		int num2 = input.nextInt();
		int num3 = input.nextInt();

		int temp = 0;
		if (num2 < num1 || num3 < num1)
		{
			if (num2 < num1)
			{
				temp = num1;
				num1 = num2;
				num2 = temp; 
			}
			if (num3 < num1)
			{
				temp = num1;
				num1 = num3;
				num3 = temp;
			}
		}
		if (num3 < num2)
		{
			temp = num2;
			num2 = num3;
			num3 = temp;
		}

		System.out.println(num1 + " " + num2 + " " + num3);
	}
}
