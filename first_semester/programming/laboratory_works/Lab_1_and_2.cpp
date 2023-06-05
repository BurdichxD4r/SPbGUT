#include <iostream>
#include <cmath>


double functionY(double x, double y) {
    if (x <= 0.8) {
        y = sqrt(pow(cos(x * M_PI / 180.0), 2) + 24) / 5;
    }else{
        y = sqrt(pow(cos(x * M_PI / 180.0), 2) + 24) / 2.5;
    }
    return y;
}

double functionZ(double V, double W, double Z) {
    if (W < -4) {
        Z = V + 7.5;
    }else if (W >= -4 && W < 3) {
        Z = V * V - 4;
    }else{
        Z = V + 7;
    }
    return Z;
}

void calculatingFunctionValue() {
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
}

void tabulatingFunction() {
    double Z, V, W, i;
    std::cout << "Табулирование функции Z(V, W)" << std::endl;
    std::cout << "Введите V => ";
    std::cin >> V;
    W = -7;
    // W[-7, 11]
    i = (11.0 + 7.0 + 1.0) / 15.0;
    while (W <= 11){
        Z = functionZ(V, W, Z);
        std::cout << "Z = " << Z << ", при W = " << W << std::endl;
        W += i;
    }
    std::cout << std::endl;
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