//Leia um número inteiro, positivo e ímpar n e imprima uma matriz com 2∗n−1 colunas, onde a última linha tem um 1 no centro com 0's em volta, a penúltima linha tem três 1's no centro com 0's em volta, a antepenúltima linha tem cinco 1's, e assim por diante (os 1's formarão um triângulo com a base para cima), até a primeira linha ser composta apenas por 1's. A condição de parada do programa é n igual a -1. A leitura de n deve ser validada de forma que o programa apenas aceite números ímpares positivos como entrada válida para produzir a matriz. Exemplos:

import java.util.Scanner;

public class exer6 {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int n;

        while (true) {
            System.out.print("Digite um número ímpar positivo (ou -1 para sair): ");
            n = ler.nextInt();

            if (n == -1) break;

            if (n <= 0 || n % 2 == 0) {
                System.out.println("Número inválido! Apenas números ímpares positivos são aceitos.");
                continue;
            }

            int linhas = n;
            int colunas = 2 * n - 1;
            int[][] matriz = new int[linhas][colunas];

            for (int i = 0; i < linhas; i++) {
                int inicio = (colunas / 2) - (n - i - 1);
                int fim = (colunas / 2) + (n - i - 1);

                for (int j = inicio; j <= fim; j++) {
                    matriz[i][j] = 1;
                }
            }

            for (int i = 0; i < linhas; i++) {
                for (int j = 0; j < colunas; j++) {
                    System.out.print(matriz[i][j] + " ");
                }
                System.out.println();
            }
        }

        ler.close();
    }

}
