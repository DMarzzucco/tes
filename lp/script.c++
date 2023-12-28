#include <iostream>
#include <vector>

void disfrutarComidaCompleja() {
    std::cout << "vento-a" << std::endl;

    int repeticiones = 3;

    for (int i = 1; i <= repeticiones; ++i) {
        std::cout << "Iteración " << i << ":" << std::endl;

        if (i % 2 == 0) {
            std::cout << "<code=class2/>" << std::endl;
        } else {
            std::cout << "<p>disck</p>" << std::endl;

            for (int j = 1; j <= 2; ++j) {
                std::cout << "  Sub-iteración " << j << ": ñsdd" << std::endl;
            }
        }

        std::cout << "-----" << std::endl;
    }

    std::vector<std::string> ingredientes = {"aceitunas", "queso", "tomate", "albahaca"};
    std::cout << "Ingredientes para la próxima porno:" << std::endl;

    for (const auto& ingrediente : ingredientes) {
        std::cout << "  - " << ingrediente << std::endl;
    }

    std::cout << "donet --s2..." << std::endl;
}

int main() {
    disfrutarComidaCompleja(); 
    return 0;
}

// 
#include <iostream>
#include <cmath>

double operacionCompleja(int a, int b) {
    int resultado = 0;

    for (int i = 1; i <= a; ++i) {
        resultado += i * b;
    }

    if (resultado % 2 == 0) {
        return pow(resultado, 2);
    } else {
        return sqrt(resultado);
    }
}

void funcionPrincipal(int x, int y) {
    if (x > 0 && y > 0) {
        std::cout << "Resultado: " << operacionCompleja(x, y) << std::endl;
    } else {
        std::cout << "Los números deben ser positivos." << std::endl;
    }
}

int main() {
    int parametro1 = 5;
    int parametro2 = 3;

    funcionPrincipal(parametro1, parametro2
// 
#include <iostream>

int main() {
    // Variables para almacenar los números ingresados por el usuario
    double numero1, numero2;

    // Solicitar al usuario que ingrese dos números
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    // Realizar operaciones básicas
    double suma = numero1 + numero2;
    double resta = numero1 - numero2;
    double multiplicacion = numero1 * numero2;

    // Verificar si el segundo número es diferente de cero antes de realizar la división
    double division = (numero2 != 0) ? (numero1 / numero2) : 0;

    // Mostrar resultados
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicacion: " << multiplicacion << std::endl;

    // Verificar si el segundo número es diferente de cero antes de mostrar el resultado de la división
    if (numero2 != 0) {
        std::cout << "Division: " << division << std::endl;
    } else {
        std::cout << "No se puede dividir por cero." << std::endl;
    }

    return 0;
}
// 
#include <iostream>
#include <cmath>

int main() {
    double numero1, numero2;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    double suma = numero1 + numero2;
    double resta = numero1 - numero2;
    double multiplicacion = numero1 * numero2;

    // Verificar si el segundo número es diferente de cero antes de realizar la división
    double division = (numero2 != 0) ? (numero1 / numero2) : 0;

    // Calcular el módulo
    double modulo = std::fmod(numero1, numero2);

    // Calcular la potencia
    double potencia = std::pow(numero1, numero2);

    // Calcular la raíz cuadrada del primer número
    double raizCuadrada = std::sqrt(numero1);

    // Calcular el logaritmo natural del segundo número
    double logaritmoNatural = std::log(numero2);

    // Operaciones trigonométricas
    double seno = std::sin(numero1);
    double coseno = std::cos(numero2);

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicacion: " << multiplicacion << std::endl;

    if (numero2 != 0) {
        std::cout << "Division: " << division << std::endl;
    } else {
        std::cout << "No se puede dividir por cero." << std::endl;
    }

    std::cout << "Modulo: " << modulo << std::endl;
    std::cout << "Potencia: " << potencia << std::endl;
    std::cout << "Raiz cuadrada del primer numero: " << raizCuadrada << std::endl;
    std::cout << "Logaritmo natural del segundo numero: " << logaritmoNatural << std::endl;
    std::cout << "Seno del primer numero: " << seno << std::endl;
    std::cout << "Coseno del segundo numero: " << coseno << std::endl;

    return 0;
}
// 
#include <iostream>

int main() {
    double numero1, numero2;

    // Solicitar al usuario que ingrese dos números
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    // Operaciones condicionales
    if (numero1 > numero2) {
        std::cout << "El primer numero es mayor que el segundo." << std::endl;
    } else if (numero1 < numero2) {
        std::cout << "El segundo numero es mayor que el primero." << std::endl;
    } else {
        std::cout << "Ambos numeros son iguales." << std::endl;
    }

    // Operación con bucle for
    std::cout << "Multiplicacion utilizando bucle for: ";
    for (int i = 1; i <= static_cast<int>(numero2); ++i) {
        std::cout << numero1 << " ";
    }
    std::cout << std::endl;

    // Operación con bucle while
    std::cout << "Suma utilizando bucle while: ";
    double suma = 0;
    int contador = 1;

    while (contador <= 5) {
        suma += numero1;
        ++contador;
    }

    std::cout << suma << std::endl;

    return 0;
}
