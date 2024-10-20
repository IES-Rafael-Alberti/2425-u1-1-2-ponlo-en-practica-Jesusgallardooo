import java.util.Scanner;  

public class Bienvenida {  
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);  


        System.out.print("Introduzca su nombre --> ");
        String nombre = scanner.nextLine();
        String lenguaje = "Java.";


        String mensaje = "Hola, " + nombre + " este programa está hecho en el lenguaje de programación: " + lenguaje;
        System.out.println(mensaje);
    }
}
