/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework11_12;
import java.util.Scanner;
import java.util.ArrayList;
/**
 *
 * @author yeoki
 */
public class Homework11_12 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here// Create a Scanner
		Scanner input = new Scanner(System.in);

		
		ArrayList<Double> list = new ArrayList<Double>();

		
		System.out.print("Enter 10 numbers: ");
		for (int i = 0; i < 10; i++) {
			list.add(input.nextDouble());
		}

		
		System.out.println("Sum of list: " + sum(list));
	}

	
	public static double sum(ArrayList<Double> list) {
		double sum = 0;
		for (int i = 0; i < list.size(); i++) {
			sum += list.get(i);
		}
		return sum;
	}
}
  