/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework12_5;
import java.util.Scanner;
/**
 *
 * @author yeoki
 */

public class Homework12_5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner input = new Scanner(System.in);

		
		System.out.print("Enter a color: ");
		String color = input.next();

		
		System.out.print("Is the triangle filled (true / false)? ");
		boolean filled = input.nextBoolean();

		boolean repeatSidesInput = true;
		do {
			
			System.out.print("Enter three side of the triangle: ");
			double side1 = input.nextDouble();		
			double side2 = input.nextDouble();		
			double side3 = input.nextDouble();
	
			try {
				
				Triangle triangle = new Triangle(side1, side2, side3);
				repeatSidesInput = false;	
				
				triangle.setColor(color);
				triangle.setFilled(filled);
		
				System.out.println(triangle.toString());
				System.out.println("Area: " + triangle.getArea());
				System.out.println("Perimeter: " + triangle.getPerimeter());
				System.out.println("Color: " + triangle.getColor());
				System.out.println("Triangle is" + (triangle.isFilled() ? "" : " not ") 
					+ "filled");
			}
			catch (IllegalTriangleException ex) {
				System.out.println(ex.getMessage());
			}

		} while (repeatSidesInput);
	}
    }

class GeometricObject {
	private String color = "white";
	private boolean filled;
	private java.util.Date dateCreated;

	
	public GeometricObject() {
		dateCreated = new java.util.Date();
	}

	
	public GeometricObject(String color, boolean filled) {
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

	
	@Override
	public String toString() {
		return "created on " + dateCreated + "\ncolor: " + color + 
			" and filled: " + filled;
	}
}

class Triangle 
		extends GeometricObject {
	private double side1;
	private double side2;
	private double side3;

	
	public Triangle() {
		side1 = side2 = side3 = 1.0;
	}

	
	public Triangle(double side1, double side2, double side3) 
		throws IllegalTriangleException {
		if (side1 + side2 <= side3 || 
			 side1 + side3 <= side2 || 
			 side2 + side3 <= side1) 
			throw new IllegalTriangleException(side1, side2, side3);
		this.side1 = side1;
		this.side2 = side2;
		this.side3 = side3;
	}

	
	public double getSide1() {
		return side1;
	}


	public double getSide2() {
		return side2;
	}

	
	public double getSide3() {
		return side3;
	}

	
	public double getArea() {
		double s = (side1 + side2 + side3) / 2;
		return Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));
	}

	
	public double getPerimeter() {
		return side1 + side2 + side3;
	}

	
	@Override
	public String toString() {
		return "Triangle: side1 = " + side1 + " side2 = " + side2 +
			" side3 = " + side3;
	}
}
    

class IllegalTriangleException extends Exception {
	private double side1;
	private double side2;
	private double side3;

	
	public IllegalTriangleException(double side1, double side2, double side3) {
		super("Illegal sides " + side1 + " " + side2 + " " + side3);
		this.side1 = side1;
		this.side2 = side2;
		this.side3 = side3;
	}

	
	public double getSide1() {
		return side1;
	}

	
	public double getSide2() {
		return side2;
	}

	
	public double getSide3() {
		return side3;
	}
}

