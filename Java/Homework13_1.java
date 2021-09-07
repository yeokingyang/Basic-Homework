/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework13_1;
import java.util.Scanner;
/**
 *
 * @author yeoki
 */
public class Homework13_1 {

    /**
     * @param args the command line arguments
     */
    
    
    public static void main(String[] args) {
         Scanner in = new Scanner(System.in);
        System.out.print("Please enter 3 sides of a triangle, color and " +
                        "whether it is filled or not (true false): ");
        double s1 = in.nextDouble();
        double s2 = in.nextDouble();
        double s3 = in.nextDouble();
        String color = in.next();
        boolean filled = in.nextBoolean();
        
        Triangle t1 = null;
        
        try {
            t1 = new Triangle(s1, s2, s3, color, filled);
        }
        catch (IllegalTriangleException ite) {
            System.out.println(ite.toString());
        }
        
        System.out.println(t1.toString());
        System.out.printf("Triangle color: %s, Triangle filled: %s%n" + 
                        "Area: %.2f%n" + 
                        "Perimeter: %.2f%n%n",
                    t1.getColor(), 
                    t1.isFilled(),
                    t1.getArea(),
                    t1.getPerimeter());
            
        
    }
}


class IllegalTriangleException extends Exception {
    
    public IllegalTriangleException(String message) {
        super("Exception: " + message);
        
    }
    
}


abstract class GeometricObject implements Comparable<GeometricObject> {
  private String color = "white";
  private boolean filled;

 
  protected GeometricObject() {
  }

  
  protected GeometricObject(String color, boolean filled) {
    this.color = color;
    this.filled = filled;
  }

  public int compareTo(GeometricObject obj) {
    if (this.getArea() > obj.getArea()) {
      return 1;
    }
    else if(this.getArea() < obj.getArea()) {
      return -1;
    }
    else {
      return 0;
    }
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

  public static GeometricObject max(GeometricObject obj1, GeometricObject obj2) {
    int compare = obj1.compareTo(obj2);
    if (compare == 1) {
      return obj1;
    } else if (compare == -1) {
      return obj2;
    } else {
      return obj1;
    }

  }


  public abstract double getArea();

  
  public abstract double getPerimeter();
}


class Triangle extends GeometricObject {
    private double mSide1;
    private double mSide2;
    private double mSide3;
    
    public Triangle() {
        super("Yellow", false);
        mSide1 = 1;
        mSide2 = 1;
        mSide3 = 1;
    }

    public Triangle(double s1, double s2, double s3, String color, boolean filled) 
                                        throws IllegalTriangleException {
                                            
        super(color, filled);
        if (s1 + s2 < s3 || s2 + s3 < s1 || s1 + s3 < s2) {
            throw new IllegalTriangleException("Any two sides added together" + 
                " must be greater than the remaining side.  NO side may equal 0!");
        }
        mSide1 = s1;
        mSide2 = s2;
        mSide3 = s3;
    }
    
    public double getSideOne() {
        return mSide1;
    }
    
    public double getSideTwo() {
        return mSide3;
    }
    
    public double getSideThree() {
        return mSide3;
    }
    
    public double getArea() {
        double perimeter = mSide1 + mSide2 + mSide3;
        return Math.sqrt(perimeter * (
                                            (perimeter - mSide1) * 
                                            (perimeter - mSide2) * 
                                            (perimeter - mSide3)));
    }
    
    public double getPerimeter() {
        return (mSide1 + mSide2 + mSide3);
    }

    @Override
    public String toString() {
        return "Triangle: side1 = " + mSide1 + " side2 = " + mSide2 +
               " side3 = " + mSide3;
    }
    
}