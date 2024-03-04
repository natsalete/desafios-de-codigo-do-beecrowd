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
        int X;
        double Y, consumo;
        
        Scanner scan = new Scanner(System.in);
        
        X = scan.nextInt();
        Y = scan.nextDouble();
    

        consumo = X / Y;
        
        System.out.printf("%.3f km/l\n", consumo);
    }
 
}