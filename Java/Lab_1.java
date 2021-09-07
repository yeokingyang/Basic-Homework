/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab_1;
import java.util.Scanner;
/**
 *
 * @author yeoki
 */

 public class Lab_1 {

	public static void main(String[] args) throws CloneNotSupportedException {


		System.out.println("Enter the first complex number: ");
		Complex complexNum1 = getComplex();
		System.out.println("Enter the second complex number: ");
		Complex complexNum2 = getComplex();

		System.out.print(complexNum1 + " + " + complexNum2 + " = ");
		print(complexNum1.add(complexNum2));

		System.out.print(complexNum1 + " - " + complexNum2 + " = "); 
		print(complexNum1.subtract(complexNum2));

		System.out.print(complexNum1 + " * " + complexNum2 + " = "); 
		print(complexNum1.multiply(complexNum2));

		System.out.print(complexNum1 + " / " + complexNum2 + " = "); 
		print(complexNum1.divide(complexNum2));

		System.out.println("|" + complexNum1 + "| = " + 
			complexNum1.abs());
	}


	public static void print(Complex n) {
		if (n.getImaginaryPart() == 0)
			System.out.println(n.getRealPart());
		else
			System.out.println(n.getRealPart() + " + " + 
			n.getImaginaryPart() + "i");
	}

	
	public static Complex getComplex() {
		
		Scanner input = new Scanner(System.in);
		double[] c = new double[2];
		for (int i = 0; i < c.length; i++)
		 	c[i] = input.nextDouble(); 
		return new Complex(c[0], c[1]); 
	}
}

    



class Complex implements Cloneable {
	private double a;
	private double b;

	public Complex() {
		this(0, 0);
	}

	public Complex(double a) {
		this(a, 0);
	}

	public Complex(double a, double b) {
		this.a = a;
		this.b = b;
	}


	public double getRealPart() {
		return a;
	}

	public double getImaginaryPart() {
		return b;
	}

	public Complex add(Complex secondComplex) {
		return new Complex(a + secondComplex.a, 
			b + secondComplex.b); 
	}

	public Complex subtract(Complex secondComplex) {
		return new Complex(a - secondComplex.a,
			b - secondComplex.b);
	}

	public Complex multiply(Complex secondComplex) {
		return new Complex(a * secondComplex.a - b * secondComplex.b,
			b * secondComplex.a + a * secondComplex.b);
	}

	public Complex divide(Complex secondComplex) {
		return new Complex((a * secondComplex.a + b * secondComplex.b) /
			(Math.pow(secondComplex.a, 2) + Math.pow(secondComplex.b, 2)),
			(b * secondComplex.a - a * secondComplex.b) /
			(Math.pow(secondComplex.a, 2) +  Math.pow(secondComplex.b, 2)));
	}


	public double abs() {
		return Math.sqrt(Math.pow(a, 2) + Math.pow(b, 2));
	}

	@Override
	public Complex clone() throws CloneNotSupportedException {
		return (Complex)super.clone();
	}

	@Override 
	public String toString() {
		return b == 0 ? a + "" : "(" + a + " + " + b + "i)";
	}
}