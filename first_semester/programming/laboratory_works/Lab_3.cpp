#include <iostream>
#include <cmath>

int funtionDoWhile() {
    std::cout << "ok" << std::endl;
    double y = 1, x = 0.38, N = 9;
    int i = 2;
    do {
        y *= 2.8 * pow(x, 3) + 2.8 * sin(i * x);
        i++;
    }while (i <= N);
    y += 3 * sin(x);
    return y;
}

int funtionWhile() {
    std::cout << "ok" << std::endl;
    double y = 1, x = 0.38, N = 9;
    int i = 2;
    while (i <= N){
        y *= 2.8 * pow(x, 3) + 2.8 * sin(i * x);
        i++;
    }
    y += 3 * sin(x);
    return y;
}

int funtionFor() {
    std::cout << "ok" << std::endl;
    double y = 1, x = 0.38, N = 9;
    for (int i = 2; i <= N; i++) {
        y *= 2.8 * pow(x, 3) + 2.8 * sin(i * x);
    }
    y += 3 * sin(x);
    return y;
}

int operatorDefinition() {
    std::cout << "Введите символ для определения оператора (f, F, 1, w, W, 2, d, D, 3)" << std::endl;
    char symbol;
    std::cin >> symbol;
    switch (symbol)
    {
    case 'f':
        std::cout << funtionFor() << std::endl;
        break;
    case 'F':
        std::cout << funtionFor() << std::endl;
        break;
    case '1':
        std::cout << funtionFor() << std::endl;
        break;
    case 'w':
        std::cout << funtionWhile() << std::endl;
        break;
    case 'W':
        std::cout << funtionWhile() << std::endl;
        break;
    case '2':
        std::cout << funtionWhile() << std::endl;
        break;
    case 'd':
        std::cout << funtionDoWhile() << std::endl;
        break;
    case 'D':
        std::cout << funtionDoWhile() << std::endl;
        break;
    case '3':
        std::cout << funtionDoWhile() << std::endl;
        break;
    default:
        std::cout << "[ERROR] НЕВЕРНЫЙ СИМВОЛ" << std::endl;
        break;
    }
    return 0;
}

int main() {
    operatorDefinition();
    return 0;
}