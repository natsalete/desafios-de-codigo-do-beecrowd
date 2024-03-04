import java.io.IOException;
import java.util.Scanner;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
       double A, B, C, pi, triangulo, circulo,trapezio, quadrado, retangulo;
    
        Scanner scan = new Scanner(System.in);
        
        A = scan.nextDouble();
        B = scan.nextDouble();
        C = scan.nextDouble();
        

        triangulo = (A * C) / 2;
        pi = 3.14159;
        circulo = pi * Math.pow(C,2);
        trapezio = ((A + B) * C)/ 2;
        quadrado = Math.pow(B,2);
        retangulo = A * B;

        
        System.out.printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\n", triangulo, circulo, trapezio);
        System.out.printf("QUADRADO: %.3f\nRETANGULO: %.3f\n", quadrado, retangulo);
 
    }
 
}