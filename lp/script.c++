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
