import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class 1002 {
    
    public static void main(String[] args) throws IOException {
        
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        
        double pi = 3.14159;
        double raio, area;
        raio = Double.parseDouble(in.readLine());
        
        
        area = pi * (raio*raio);
        
        System.out.printf("A = %.4lf\n", area);
        
    }
    
}