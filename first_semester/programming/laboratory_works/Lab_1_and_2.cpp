#include <iostream>
#include <cmath>


double functionY(double x, int y) {
    if (x <= 0.8) {
        y = sqrt(cos(x) * cos(x) + 24) / 5;
    }else{
        y = sqrt(cos(x) * cos(x) + 24) / 2.5;
    }
    return y;
}

double functionZ(double V, double W, int Z) {
    if (W < -4) {
        Z = V + 7.5;
    }else if (-4 <= W < 3) {
        Z = V * V - 4;
    }else{
        Z = V + 7;
    }
    return Z;
}

int calculatingFunctionValue() {
    std::cout << "Вычисление значения функции y(x)" << std::endl;
    double x, y, Z, V, W;
    std::cout << "Введите x => ";
    std::cin >> x;
    std::cout << std::endl;
    y = functionY(x, y);
    std::cout << "y = " << y << '\n' << std::endl;
    std::cout << "Вычисление значения функции Z(V, W)" << std::endl;
    std::cout << "Введите V => ";
    std::cin >> V;
    std::cout << "Введите W => ";
    std::cin >> W;
    std::cout << std::endl;
    Z = functionZ(V, W, Z);
    std::cout << "Z = " << Z << '\n' << std::endl;
    return 0;
}

int tabulatingFunction() {
    double Z, V;
    std::cout << "Табулирование функции Z(V, W)" << std::endl;
    std::cout << "Введите V => ";
    std::cin >> V;
    // W[-7, 11]
    for (int W = -7; W <= 11; W++) {
        Z = functionZ(V, W, Z);
        std::cout << "Z = " << Z << ", при W = " << W << std::endl; 
    }
    std::cout << std::endl;
    return 0;
}

int main() {
    std::cout << "Разветвляющие вычислительные процессы\nВариант 17" << std::endl;
    std::cout << "Вычислить значение функций y(x) и Z(V,W)" << std::endl;
    calculatingFunctionValue();
    std::cout << "Циклические вычислительные процессы. Табулирование функции.\nВариант 17" << std::endl;
    std::cout << "Протабулировать функцию Z(V,W) на заданном интервале в 15 равностоящих точках. Значение V выбрать самостоятельно." << std::endl;
    tabulatingFunction();
    return 0;
}