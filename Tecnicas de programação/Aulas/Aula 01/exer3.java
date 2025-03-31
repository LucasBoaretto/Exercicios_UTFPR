//Leia um número do teclado e informe se este é um número perfeito. Número perfeito é um número inteiro cuja soma de todos os seus divisores positivos, excluindo ele próprio, é igual ao próprio número;

import java.util.Scanner;

public class exer3 {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        System.out.print("N = ");
        int num = ler.nextInt();

        int soma = 0;
        for(int i = 1; i < num; i++){
            if (num % i == 0) {
                soma = soma + i;
            }
        }
        if (soma == num) {
            System.out.println(num + " é um número perfeito!");
        }

        ler.close();
    }
}
