/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package echomostro;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 *
 * @author NOLA_20216
 */
public class Echomostro {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        int i;
        Integer ix;
        
        InputStreamReader inStream= new InputStreamReader(System.in);
        BufferedReader stdin = new BufferedReader(inStream);
        
        String inData;
        System.out.println("Enter the data:");
        inData=stdin.readLine();
       // System.out.println("You entered:"+ inData);
        i=Integer.parseInt(inData);
        ix = new Integer(i);
        System.out.println(ix.toString());
        inData=stdin.readLine();
        int c= Integer.parseInt(inData);
        System.out.println(c);
        
    }

    @Override
    public String toString() {
        return "Echomostro{" + '}';
    }
    
}
