/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework4o18;

import java.util.Scanner;

/**
 *
 * @author yeoki
 */
public class Homework4o18 {

    public static void main (String[] args)
   {
        Scanner in = new Scanner(System.in);
        
        System.out.print("Please enter two characters: ");
        String status = in.next();
        
        char major = Character.toUpperCase(status.charAt(0));
        char year = status.charAt(1);
        
        String courseName = "";
        String yearName = "";
        
        if (major == 'M' || major == 'I' || major == 'C')
        {
            switch(major)
            {
                case 'M':
                    courseName = "Mathematics";
                    break;
                case 'C':
                    courseName = "Computer Science";
                    break;
                case 'I':
                    courseName = "Information Technology";
                    break;
                default:
                    break;
            }
            
            switch(year)
            {
                case '1':
                    yearName = "freshman";
                    break;
                case '2':
                    yearName = "sophomore";
                    break;
                case '3':
                    yearName = "junior";
                    break;
                case '4':
                    yearName = "senior";
                    break;
                default:
                    break;
            }
            System.out.printf("%s %s%n", courseName, yearName);
        }
        else{
            System.out.printf("Invalid input%n");
        }
    }
}

