#include <iostream>
#include <cmath>

double funtionDoWhile() {
    std::cout << std::endl;
    double y = 1, x = 0.38, N = 9;
    int i = 2;
    do {
        y *= 2.8 * pow(x, 3) + 2.8 * sin(i * x);
        i++;
    }while (i <= N);
    y += 3 * sin(x);
    return y;
}

double funtionWhile() {
    std::cout << std::endl;
    double y = 1, x = 0.38, N = 9;
    int i = 2;
    while (i <= N){
        y *= 2.8 * pow(x, 3) + 2.8 * sin(i * x);
        i++;
    }
    y += 3 * sin(x);
    return y;
}

double funtionFor() {
    std::cout << std::endl;
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
    std::cout << "Циклические вычислительные процессы. Вычисления по рекуррентным формулам." << std::endl;
    std::cout << "Вариант 17\n" << std::endl;
    std::cout << "Определить значение выражения с использованием 3 циклов. Для вывода значений выражения использовать оператор выбора swith()\n"
    << "Задание: ввести с клавиатуры символ.\n"
    << "Если этот символ - «f» или «F» - то вычислить значение y с помощью оператора FOR;\n"
    << "если этот символ - «w» или «W» - то вычислить y операторов WHILE;\n"
    << "если этот символ - «d» или «D» - оператором DO WHILE;\n"
    << "если введен какой-либо другой символ — вывести сообщение «НЕВЕРНЫЙ СИМВОЛ»\n"
    << "Вместо символов f, w или d можно вводить цифры 1,2 или 3\n" << std::endl;
    operatorDefinition();
    return 0;
}