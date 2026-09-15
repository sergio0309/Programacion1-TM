public static void main(String[] args) {
    boolean isLoading = false;
    boolean isActive = true;

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

}