<?php

function disfrutarComidaCompleja() {
    echo "Hola, me gusta el pan\n";

    // Algunas variables
    $repeticiones = 3;

    // Bucle principal
    for ($i = 1; $i <= $repeticiones; ++$i) {
        echo "Iteración $i:\n";

        if ($i % 2 == 0) {
            echo "Disfrutando de una deliciosa sopa\n";
        } else {
            echo "Comiendo una sabrosa pizza\n";

            // Bucle anidado
            for ($j = 1; $j <= 2; ++$j) {
                echo "  Sub-iteración $j: Añadiendo ingredientes\n";
            }
        }

        echo "-----\n";
    }

    // Array de ingredientes
    $ingredientes = ["aceitunas", "queso", "tomate", "albahaca"];

    echo "Ingredientes para la próxima comida:\n";

    // Bucle para imprimir ingredientes
    foreach ($ingredientes as $ingrediente) {
        echo "  - $ingrediente\n";
    }

    echo "Terminando de disfrutar de la comida...\n";
}

// Llamada a la función
disfrutarComidaCompleja();
?>
