import java.util.Scanner;

public static void main(String[] args) {
    boolean isLoading = false;
    boolean isActive = true;

    Scanner scanner = new Scanner(System.in);

    char aCharacter = 'a';
    char oneCharacter = '1';
    char unicode = '\u0021';


    byte enteroByte = 127;                      // Rango máximo positivo de byte
    short enteroShort = 32767;                  // Rango máximo positivo de short
    int enteroInt = 2147483647;                 // Rango máximo positivo de int
    long enteroLong = 9223372036854775807L;     // Rango máximo positivo de long


    float valorFloat = 3.1028235e38f;               // Rango máximo positivo de float
    double valorDouble = 1.7976931348623157e308;    // Rango máximo positivo de double

    int a = 10;     // Asignacion simple
    System.out.println("Asignacion (=): " + a);

    a += 5;         // Equivalente a: a = a + 5
    System.out.println("Suma y asignacion (+=): " + a);

    a -= 3;         // Equivalente a: a = a - 3
    System.out.println("Restay asignacion (-=): " + a);

    a *= 2;         // Equivalente a: a = a * 2
    System.out.println("Multiplicacion y asignacion (*=): " + a);

    a /= 4;         // Equivalente a: a = a / 4
    System.out.println("Division y asignacion (/=): " + a);

    a %= 3;         // Equivalente a: a = a % 3
    System.out.println("Modulo y asignacion (%=): " + a);

    int b=6;

    System.out.println("Suma: " + (a + b));             //Adicion
    System.out.println("Resta: " + (a - b));            //Sustraccion
    System.out.println("Multiplicaion: " + (a * b));    //
    System.out.println("Division: " + (a / b));         //Division entera
    System.out.println("Modulo: " + (a % b));           //Resto de la division

    int a = 10, b = 20;
    System.out.println("a == b: " + (a == b));  // Igualdad
    System.out.println("a != b: " + (a != b));  // Diferente de
    System.out.println("a > b: " + (a > b));    // Mayor que
    System.out.println("a < b: " + (a < b));    // Menor que
    System.out.println("a >= b: " + (a >= b));  // Mayor o igual que
    System.out.println("a <= b: " + (a <= b));  // Menor o igual que

    boolean a = true, b = false;
    System.out.println("a && b: " + (a && b));  // AND lógico
    System.out.println("a || b: " + (a || b));  // OR lógico
    System.out.println("!a: " + (!a));          // Not lógico


    int a = 5;
    int b = -a // Negación unaria
    boolean flag = true;

    System.out.println("Negación unaria" + b);  // -5
    System.out.println("Negación lógica" + !flag);  // false

    // Incremento y decremento
    int c = 10;
    System.out.println("Valor original: " + c);
    System.out.println("Post-Incremento: " + (c++));
    System.out.println("Pre-Incremento: " + (++c));
    System.out.println("Post-Decremento: " + (c--));
    System.out.println("Pre-Decremento: " + (--c));

    int a = 10; // Asigancion simple
    System.out.println("Asiganción (=): " + a);


    int numero = scanner.nextInt();
    if (numero > 0) {
        System.out.println("El número es positivo");
    } else if (numero < 0) {
        System.out.println("El número es negativo");
    } else {
        System.out.println("El número es cero");
    }

    for (int i = 1; i <= 5; i++) {
        System.out.println("Número: " + i);
    }

    class House {
        //  Atributos
        String color;
        int rooms;
        double size;

        //  Métodos
        void openDoor(){
            System.out.println("La puerta esta abierta.");
        }

        void turnOnLights(){
            System.out.println("Las luces están encendidas.");
        }
    }


}