/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework4o6;

/**
 *
 * @author yeoki
 */
public class Homework4o6 {

   public static void main(String[] args) {
		final double RAD = 40;
		
		double ang1 = (Math.random() * (2 * Math.PI));
		double ang2 = (Math.random() * (2 * Math.PI));
		double ang3 = (Math.random() * (2 * Math.PI));

	
		double x1 = RAD * Math.cos(ang1);
		double y1 = RAD * Math.sin(ang1);
		double x2 = RAD * Math.cos(ang2);
		double y2 = RAD * Math.sin(ang2);
		double x3 = RAD * Math.cos(ang3);
		double y3 = RAD * Math.sin(ang3);

		
		double a = Math.sqrt(Math.pow(x2 - x3, 2) + Math.pow(y2 - y3, 2));
		double b = Math.sqrt(Math.pow(x1 - x3, 2) + Math.pow(y1 - y3, 2));
		double c = Math.sqrt(Math.pow(x1 - x2, 2) + Math.pow(y1 - y2, 2));

		
		double angA = Math.toDegrees(Math.acos((a * a - b * b - c * c)
			/ (-2 * b * c)));
		double angB = Math.toDegrees(Math.acos((b * b - a * a - c * c)
			/ (-2 * a * c)));
		double angC = Math.toDegrees(Math.acos((c * c - b * b - a * a)
			/ (-2 * a * b)));

	
		System.out.println("These three angles are " +
			Math.round(angA * 100) / 100.0 + " ," +
			Math.round(angB * 100) / 100.0 + " ," +
			Math.round(angC * 100) / 100.0);	
	}
    
}
