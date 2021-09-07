/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework5_20;

/**
 *
 * @author yeoki
 */
public class Homework5_20 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      final int NUMBER_OF_PRIMES_PER_LINE = 8;
		int count = 0; 

		System.out.println(
			"The prime numbers between 2 and 1000, inclusive are :\n");

	
		for (int num = 2; num <= 1000; num++) {
			
			boolean isPrime = true;	
			
			for (int div = 2; div <= num / 2; div++) {
				if (num % div == 0)	{ 
					isPrime = false;	
					break;	
				}
			}
		
			if (isPrime) {
				count++;	
                                
				if (count % NUMBER_OF_PRIMES_PER_LINE == 0) {
					
					System.out.println(num);
				}
				else
					System.out.print(num + " ");
			}
		}
	
    }
    
}
