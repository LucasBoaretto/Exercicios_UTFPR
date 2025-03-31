//Leia um número do teclado e informe se este número é primo ou não;

import java.util.Scanner;

public class exer2 {

    public static void main(String[] args) {

        Scanner ler = new Scanner(System.in);

        System.out.print("Informe um número: ");
        int num = ler.nextInt();

        int divisores = 0;
        int i;
        for (i = 1; i <= num; i++) {
            if (num % i == 0 && num != 2) {
                divisores++;
            }
        }
        if (divisores == 2) {
            System.out.println("O número " + num + " é primo!");
        }
        ler.close();
    }
}
