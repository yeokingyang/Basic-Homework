/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework9_1;

/**
 *
 * @author yeoki
 */
public class Homework9_1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
  
        MyRect2[] rectangles = new MyRect2[2];
        rectangles[0] = new MyRect2(4,40);
        rectangles[1] = new MyRect2(3.5, 35.9);

        for (int i = 0; i < 2; i++){
            System.out.println("MyRect2 " + (i+1) +":");
            System.out.print("Area = " + rectangles[i].getArea());
            System.out.println(" Perimeter = " +  rectangles[i].getPerimeter() +"\n");
        }
    }
}

class MyRect2 {

    private double width;
    private double height;

    public MyRect2() {
        this.width = 1.0;
        this.height = 1.0;
    }

    public MyRect2(double width, double height) {
        this.width = width;
        this.height = height;
    }

    
    public double getArea() {
        return this.width * this.height;
    }

    public double getPerimeter() {
        return this.width * 2 + this.height * 2;
    }

}