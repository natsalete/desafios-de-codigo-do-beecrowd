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
 
        Scanner scan = new Scanner(System.in);
       
        //DIFERENCA = (A * B - C * D).
       
       int a, b, c, d;
       
       a = scan.nextInt();
       b = scan.nextInt();
       c = scan.nextInt();
       d = scan.nextInt();
       
       int dif = (a * b - c * d);
       
       System.out.println("DIFERENCA = " + dif);
 
    }
 
}