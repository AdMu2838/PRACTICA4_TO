#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    // Generador de números aleatorios
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 50); // Rango de números aleatorios

    // Vector de números enteros generados de forma aleatoria
    std::vector<int> vec(100);
    for (auto& num : vec) {
        num = dis(gen);
    }

    // Contar números impares y menores de 20
    int count = std::count_if(vec.begin(), vec.end(), [](int num) {
        return num < 20 && num % 2 != 0;
    });

    std::cout << "Cantidad de numeros impares y menores de 20: " << count << std::endl;

    return 0;
}
