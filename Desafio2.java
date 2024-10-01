import java.util.Scanner;

public class Desafio2 {

    public static int contarA(String frase) {
       char toArray [] = frase.toLowerCase().toCharArray();
       int quantidade = 0;

       for (int i = 0; i < toArray.length; i++) {
        if (toArray[i] == 'a') {
            quantidade++;
        }
       }

       return quantidade;
    }


    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite uma frase: ");
        String frase = scanner.nextLine();

        int quantidade = contarA(frase);
        System.out.println("Na frase digitada existem " + quantidade + " letra(s) a.");

        scanner.close();
    }
}