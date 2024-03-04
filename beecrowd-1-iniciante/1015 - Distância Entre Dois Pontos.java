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
 
        double x1, y1, x2, y2, dis;
        
        Scanner scan = new Scanner(System.in);
        
        x1 = scan.nextDouble();
        y1 = scan.nextDouble();
        x2 = scan.nextDouble();
        y2 = scan.nextDouble();
    
        dis = Math.sqrt( Math.pow((x2 - x1),2) + Math.pow((y2 - y1),2));
        
        System.out.printf("%.4f\n", dis);
    }
 
}