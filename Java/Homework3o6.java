import java.util.Scanner;


/**
 *
 * @author yeoking
 */
public class Homework3o6 {

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        
        final double KILOGRAMS_PER_POUND = 0.453592; // Constant
        final double METERS_PER_INCH =  0.0254;

        System.out.printf("Enter weight in pounds: ");
        double weight = input.nextDouble();
        System.out.printf("Enter feet: ");
        int feet = input.nextInt();
        System.out.printf("Enter inches: ");
        int inches = input.nextInt();

        double height = inches+(feet*12);
        
        double weightInKg = weight * KILOGRAMS_PER_POUND;
        double heightInMeters = height * METERS_PER_INCH;
        double bmi = weightInKg /
        (heightInMeters * heightInMeters);

        System.out.println("BMI is " + bmi);
        
        if (bmi < 18.5)
            System.out.println("Underweight");
        else if (bmi < 25)
            System.out.println("Normal");
        else if (bmi < 30)
            System.out.println("Overweight");
        else
            System.out.println("Obese");


    }
}
    

