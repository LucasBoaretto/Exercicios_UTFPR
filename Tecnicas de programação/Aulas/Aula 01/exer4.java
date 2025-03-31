//Leia um número do teclado e informe todos os números primos entre 0 e este número;

import java.util.Scanner;

public class exer4 {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        System.out.print("Informe um número: ");
        int num = ler.nextInt();
        int i, j, divisores;

        i = 2;
        do
        {
            divisores = 0;
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    divisores++;
                }
            }
            if (divisores == 2)
            {
                System.out.println(i);
            }
            i++;
        } while (i != num);
        ler.close();
    }
}
