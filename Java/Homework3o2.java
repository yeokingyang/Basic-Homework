import java.util.*;
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author yeoking
 */
public class Homework3o2 {
    public static void main (String [] args){
        Scanner input = new Scanner(System.in);
        
        int dig1 =(int)(Math.random()*10);
        int dig2 =(int)(Math.random()*10);
        int dig3 =(int)(Math.random()*10);
        
        System.out.println("The sum of "+ dig1 +"+"+dig2+"+"+dig3+"?");
        int answer = input.nextInt();
    
       if (dig1+dig2+dig3 != answer) {  System.out.println("Your answer is false");
        } else {
            System.out.println("Your answer is true");
        }
        
    }
    }

