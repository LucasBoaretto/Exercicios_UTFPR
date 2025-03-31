//Preencha um vetor com 10 números pseudo-aleatórios e imprima este vetor de forma ordenada. Faça uso do algoritmo de ordenação bolha;

import java.util.Random;

public class exer5 {
    public static void main(String[] args) {
        Random num = new Random();
        
        int i = 0, tam = 10;
        int[] vet = new int[tam];
        
        for(i = 0; i < tam; i++){
            int x = num.nextInt(100);
            vet[i] = x;
        }
        for(i = 0; i < tam; i++){
            System.out.print(vet[i] + " ");
        }

        System.out.println("");

        for (i = 0; i < tam - 1; i++) { 
            for (int j = 0; j < tam - 1 - i; j++) { 
                if (vet[j] > vet[j + 1]) {
                    
                    int temp = vet[j];
                    vet[j] = vet[j + 1];
                    vet[j + 1] = temp;
                }
            }
        }

        for(i = 0; i < tam; i++){
            System.out.print(vet[i] + " ");
        }
    }
}
