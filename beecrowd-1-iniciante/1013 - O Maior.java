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
 
        int A, B, C, X, maiorAB, maiorXC;
        
        Scanner scan = new Scanner(System.in);
        
        A = scan.nextInt();
        B = scan.nextInt();
        C = scan.nextInt();
        
       maiorAB = (A + B + Math.abs(A - B))/2;
       
        if(maiorAB == A)
            X = A;
        else 
            X = B;
        
        maiorXC = (X + C + Math.abs(X - C))/2;
       
        
        if(maiorXC == X)
            System.out.println(X + " eh o maior");
        else 
            System.out.println(C + " eh o maior");
 
    }
 
}