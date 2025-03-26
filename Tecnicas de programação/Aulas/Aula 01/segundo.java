import java.util.Scanner;
import java.util.Random;
import java.io.Console;


public class segundo {
    public static void main(String[] args){
        
        Scanner teclado = new Scanner(System.in);
        Console console = System.console();

        System.out.print("Digite um número inteiro: ");
        int i = teclado.nextInt();//lendo um inteiro

        System.out.print("Digite um número real: ");
        double r = teclado.nextDouble();//lendo real

        System.out.print("Digite uma frase: ");
        String s = teclado.nextLine();//lendo cadeia de caracteres
        s = teclado.nextLine();//lendo cadeia de caracteres

        System.out.println("\n\ninteiro: " + i + ", real: " + r);
        System.out.println("Frase: " + s);

        //obtendo numeros pseudo-aleatorios de 0 a 9
        Random x = new Random();
        int j = x.nextInt(10);
        System.out.println("\n Um numero inteiro pseudo-aleatorio: " + j);


    }
}
