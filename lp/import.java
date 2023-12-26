import java.util.ArrayList;
import java.util.List;

public class Comida {
    public static void main(String[] args) {
        disfrutarComidaCompleja();
    }

    static void disfrutarComidaCompleja() {
        System.out.println("Hola, me gusta el pan");

        // Algunas variables
        int repeticiones = 3;

        // Bucle principal
        for (int i = 1; i <= repeticiones; i++) {
            System.out.println("Iteración " + i + ":");

            if (i % 2 == 0) {
                System.out.println("Disfrutando de una deliciosa sopa");
            } else {
                System.out.println("Comiendo una sabrosa pizza");

                // Bucle anidado
                for (int j = 1; j <= 2; j++) {
                    System.out.println("  Sub-iteración " + j + ": Añadiendo ingredientes");
                }
            }

            System.out.println("-----");
        }

        // Lista de ingredientes
        List<String> ingredientes = new ArrayList<>();
        ingredientes.add("aceitunas");
        ingredientes.add("queso");
        ingredientes.add("tomate");
        ingredientes.add("albahaca");

        System.out.println("Ingredientes para la próxima comida:");

        // Bucle para imprimir ingredientes
        for (String ingrediente : ingredientes) {
            System.out.println("  - " + ingrediente);
        }

        System.out.println("Terminando de disfrutar de la comida...");
    }
}
