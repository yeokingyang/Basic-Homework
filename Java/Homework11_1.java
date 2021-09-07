/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework11_1;
import java.util.Scanner;
/**
 *
 * @author yeoki
 */
public class Homework11_1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        // Create a Scanner object
		Scanner input = new Scanner(System.in);

		
		System.out.print("Enter the three side of the triangle: ");
		double side1 = input.nextDouble();		
		double side2 = input.nextDouble();		
		double side3 = input.nextDouble();

		
		System.out.print("Enter a color: ");
		String color = input.next();

		
		System.out.print("Is the triangle filled (please enter true / false)? ");
		boolean filled = input.nextBoolean();

		
		Triangle triangle = new Triangle(side1, side2, side3);
		triangle.setColor(color);
		triangle.setFilled(filled);

		System.out.println(triangle.toString());
		System.out.println("Area: " + triangle.getArea());
		System.out.println("Perimeter: " + triangle.getPerimeter());
		System.out.println("Color: " + triangle.getColor());
		System.out.println("Triangle is" + (triangle.isFilled() ? " " : " not ") 
			+ "filled");
	}
    }
    

 class GeoObj {
	private String color = "blank";
	private boolean filled;
	private java.util.Date dateCreated;


	public GeoObj() {
		dateCreated = new java.util.Date();
	}

	
	public GeoObj(String color, boolean filled) {
		dateCreated = new java.util.Date();
		this.color = color;
		this.filled = filled;
	}


	public String getColor() {
		return color;
	}
	
        
	public void setColor(String color) {
		this.color = color;
	}

        public boolean isFilled() {
		return filled;
	}

	
	public void setFilled(boolean filled) {
		this.filled = filled;
	}

	
	public java.util.Date getDateCreated() {
		return dateCreated;
	}

        
       
	public String toString() {
		return "created on " + dateCreated + "\ncolor: " + color + 
			" and filled: " + filled;
	}
}

class Triangle 
		extends GeoObj {
	private double tside1;
	private double tside2;
	private double tside3;

	
	Triangle() {
		tside1 = tside2 = tside3 = 1.0;
	}

	
	Triangle(double side1, double side2, double side3) { 
		this.tside1 = side1;
		this.tside2 = side2;
		this.tside3 = side3;
	}

	
	public double getSide1() {
		return tside1;
	}

	
	public double getSide2() {
		return tside2;
	}

	
	public double getSide3() {
		return tside3;
	}

	
	public double getArea() {
		double s = (tside1 + tside2 + tside3) / 2;
		return Math.sqrt(s * (s - tside1) * (s - tside2) * (s - tside3));
	}

	
	public double getPerimeter() {
		return tside1 + tside2 + tside3;
	}

	
	public String toString() {
		return "Triangle: side1 = " + tside1 + " side2 = " + tside2 +
			" side3 = " + tside3;
	}
}
