/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework12_15;
import java.util.*;
import java.io.*;

/**
 *
 * @author yeoki
 */
public class Homework12_15 {

    /**
     * @param args the command line arguments
     */
   public static void main(String[] args) throws Exception {
	
		File file = new File("Exercise12_15.txt");
		if (file.exists()) {
			System.out.println("File already exists");
			System.exit(0);
		}

		try (
			
			PrintWriter output = new PrintWriter(file);
		) {
			
			for (int i = 0; i < 100; i++) {
				output.print(((int)(Math.random() * 300) + 1));
				output.print(" ");
			}
		}


		ArrayList<Integer> list = new ArrayList<>();

		try(
			
			Scanner input = new Scanner(file);
		) {
			
			while (input.hasNext()) {
				list.add(input.nextInt());
			}
		}

		
		Collections.sort(list);

	
		System.out.print(list.toString());
		System.out.println();
	}
}
