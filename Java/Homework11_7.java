/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework11_7;
import java.util.Scanner;
import java.util.ArrayList;

/**
 *
 * @author yeoki
 */
public class Homework11_7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       
		Scanner input = new Scanner(System.in);

		
		ArrayList<Integer> list = new ArrayList<Integer>();

		
		System.out.print("Enter a list of integers, Enter 0 to end the list: ");
		Integer num = input.nextInt();

		while (num.intValue() != 0) {
			list.add(num);
			num = input.nextInt();
		}

		
		shuffle(list);

		
		for (int i = 0; i < list.size(); i++) {
			System.out.print(list.get(i) + " ");
		}
		System.out.println();
	}

	
	public static void shuffle(ArrayList<Integer> list) {
		java.util.Collections.shuffle(list);
	}
}
   
