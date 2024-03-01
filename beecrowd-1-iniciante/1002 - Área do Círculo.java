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
 
        //area = π . raio2.
        //π = 3.14159
        
        Scanner scan = new Scanner(System.in);
        
        double raio;
        
        raio = scan.nextDouble();
        
        double area = 3.14159 * (raio * raio);
        
        System.out.printf("A=%.4f\n" , area);
    }
 
}