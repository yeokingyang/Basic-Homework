/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package homework;

/**
 *
 * @author yeoki
 */
public class Homework {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
    int[] list = {5,3,2,1};
    reverse(list);
    for(int i=0;i<list.length;i++)
    System.out.print(list[i]+" ");
}
 

    public static void reverse (int[] list){
        int [] newList= new int[list.length];
        for (int i=0;i<list.length;i++)
            newList[i]=list[list.length-1-i];
        
            list=newList;
        
    }
    
}
    

