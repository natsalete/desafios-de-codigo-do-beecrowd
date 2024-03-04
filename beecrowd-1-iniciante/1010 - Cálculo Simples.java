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
 
       int cod1, cod2, n1, n2;
        double valor1, valor2, total;
           
        Scanner scan = new Scanner(System.in);
        
        cod1 = scan.nextInt();
        n1 = scan.nextInt();
        valor1 = scan.nextDouble();
        cod2 = scan.nextInt();
        n2 = scan.nextInt();
        valor2 = scan.nextDouble();
    
        //12 1 5.30
        //16 2 5.10

        total = (n1 * valor1) + (n2* valor2);
        
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    }
 
}