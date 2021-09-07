/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework5_33;

/**
 *
 * @author yeoki
 */
public class Homework5_33 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
     
        int sumOfDivisor = 0;
         
        for (int i = 1; i <= 10000; i++) {
  
          for (int j = 1; j < i; j++) {
              if (i % j == 0) {
               sumOfDivisor += j;
              }
   }
 
            if (sumOfDivisor == i) {
              System.out.println(i + " is a perfect number.");
             
   }
                     sumOfDivisor = 0;
        }
    }
}
            
 

 
   
    

