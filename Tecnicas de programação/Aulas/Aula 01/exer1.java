//Leia um número do teclado e imprima todos os números ímpares de 0 até o número lido;

import java.util.Scanner;

public class exer1 {
    
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);

        System.out.print("n= ");
        int num = teclado.nextInt();

        for(int i = 0; i <= num; i++){
            if (i % 2 != 0) {
                System.out.println(i);
            }
        }
        teclado.close();
    }
}
