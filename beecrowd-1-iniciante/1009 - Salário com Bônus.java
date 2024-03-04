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
       
        String nome;
        
        double a, b, total = 0;
        
        nome = scan.next();

        a = scan.nextDouble();
        b = scan.nextDouble();
        
        total =(b * 0.15) + a;

        System.out.println(String.format("TOTAL = R$ %.2f", total));
       
 
    }
 
}