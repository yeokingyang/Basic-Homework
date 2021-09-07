/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework12_1;

/**
 *
 * @author yeoki
 */
public class Homework12_1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         String[] myList = new String[3];
		  java.util.Scanner input = new java.util.Scanner(System.in);
		  
		System.out.println("Input a number.");
			myList[0] = input .next();
		System.out.println("Input an operator.");
			myList[1] = input .next();
		System.out.println("Input a number.");
			myList[2] = input .next();

	    
	    int result = 0;
	    
	    try
	    {
	    	int number = Integer.parseInt(myList[0]);
	    }
	    catch(NumberFormatException ex)
	    {
	    	System.out.println("Wrong Input: " + myList[0]);
	    }
	    
	    try
	    {
	    	int number2 = Integer.parseInt(myList[2]);
	    }
	    catch(NumberFormatException ex)
	    {
	    	System.out.println("Wrong Input: " + myList[2]);
	    }

	    
	    switch (myList[1].charAt(0)) { 
	      case '+': result = Integer.parseInt(myList[0]) + 
	                         Integer.parseInt(myList[2]);
	                break;
	      case '-': result = Integer.parseInt(myList[0]) -
	                         Integer.parseInt(myList[2]);
	                break;
	      case '.': result = Integer.parseInt(myList[0]) *
	                         Integer.parseInt(myList[2]);
	                break;
	      case '/': result = Integer.parseInt(myList[0]) /
	                         Integer.parseInt(myList[2]);
	    }

	    System.out.println(myList[0] + ' ' + myList[1] + ' ' + myList[2]
	      + " = " + result);
	  }
	}
