import java.util.*;

public class main{
    String solution;
    List<Integer> digits;

    public static void main(String[] args) {
        new main().menu(); /* Run ke menunya */
    }

    /* Masuk menu untuk memilih metode memasukkan angka */
    void menu() { 
        Scanner sc = new Scanner(System.in);
        System.out.println("Silahkan memilih metode yang ingin digunakan: ");
        System.out.println("1. Memasukkan angka sendiri secara manual");
        System.out.println("2. Memasukkan angka secara acak");
        System.out.print("Masukkan pilihan anda: ");
        String input = sc.nextLine();
    
        if (input.equals("1")) {
            manual();
        } else if (input.equals("2")) {
            random();
        } else {
            System.out.println("Input yang anda masukkan salah");
        }
    }

    void manual(){
        digits = listOfDigits();
    // Input angka terlebih dahulu
        Scanner sc = new Scanner(System.in);
        System.out.print("Masukkan angka pertama: ");
        String input1 = sc.nextLine();
        System.out.print("Masukkan angka kedua: ");
        String input2 = sc.nextLine();
        System.out.print("Masukkan angka ketiga: ");
        String input3 = sc.nextLine();
        System.out.print("Masukkan angka keempat: ");
        String input4 = sc.nextLine();

    // Ubah angka dari string ke integer
        int n1, n2, n3, n4;
        if (input1.equals("A")) {
            n1 = 1;
        } else if (input1.equals("J")) {
            n1 = 11;
        } else if (input1.equals("Q")) {
            n1 = 12;
        } else if (input1.equals("K")) {
            n1 = 13;
        } else {
            n1 = Integer.parseInt(input1);
        }

        if (input2.equals("A")) {
            n2 = 1;
        } else if (input2.equals("J")) {
            n2 = 11;
        } else if (input2.equals("Q")) {
            n2 = 12;
        } else if (input2.equals("K")) {
            n2 = 13;
        } else {
            n2 = Integer.parseInt(input2);
        }

        if (input3.equals("A")) {
            n3 = 1;
        } else if (input3.equals("J")) {
            n3 = 11;
        } else if (input3.equals("Q")) {
            n3 = 12;
        } else if (input3.equals("K")) {
            n3 = 13;
        } else {
            n3 = Integer.parseInt(input3);
        }

        if (input4.equals("A")) {
            n4 = 1;
        } else if (input4.equals("J")) {
            n4 = 11;
        } else if (input4.equals("Q")) {
            n4 = 12;
        } else if (input4.equals("K")) {
            n4 = 13;
        } else {
            n4 = Integer.parseInt(input4);
        }
    }

    void random(){

    }

    List<Integer> listOfDigits() {
        List<Integer> digits = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 4; i++) {
            String input = sc.nextLine();
            if (input.equals("A")) {
                digits.add(1);
            } else if (input.equals("J")) {
                digits.add(11);
            } else if (input.equals("Q")) {
                digits.add(12);
            } else if (input.equals("K")) {
                digits.add(13);
            } else {
                digits.add(Integer.parseInt(input));
            }
        }
        return digits;
    }
}
