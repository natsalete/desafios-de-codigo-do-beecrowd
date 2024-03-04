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
 
        int n, h;
        double valor;
    
        Scanner scan = new Scanner(System.in);
        
        n = scan.nextInt(); 
        h = scan.nextInt();
        valor = scan.nextDouble();
        
    
        valor = h * valor;
        System.out.println("NUMBER = " + n);
        System.out.printf("SALARY = U$ %.2f\n", valor);
 
    }
 
}