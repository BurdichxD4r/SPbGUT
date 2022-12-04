#include <iostream>
#include <cmath>
#include <cstring>

// todo: Задание 1
/* Определить функцию, получающую
целое число и определяющую, является ли оно
простым. Входной параметр – число. Возвращаемое
значение «1», если число простое, «0» – в
противном случае */

int determine_whether_number_prime(int number){
    using namespace std;
    int count = 0;
    for (int i = 1; i < number / 2 + 1; i++){
        if (number % i == 0){count++;}
    }
    if (count == 1){
        cout << "Число " << number << " простое" << endl;
        return 1;}
    else{
        cout << "Число " << number << " не простое" << endl;
        return 0;
    }
}

// todo: Задание 2
/* Написать функцию для расчета
наибольшего общего делителя двух натуральных
чисел, используя алгоритм Евклида. Входные
параметры - два числа, возвращаемое значение -
НОД */

int greatest_common_divisor(int number_a, int numder_b){
    if (number_a == numder_b)
        return number_a;
    if (number_a > numder_b)
        return greatest_common_divisor(number_a-numder_b, numder_b);
    return greatest_common_divisor(number_a, numder_b-number_a);
}

// todo: Задание 3
/* Написать функцию, определяющую,
является ли целое число полным квадратом.
Входной параметр – число. Возвращаемое значение
- 1, если является, 0 - в противном случае */

int number_complete_square(int number){
    if (sqrt(number) == (int)sqrt(number))
    return 1;
    else return 0;
}

// todo: Задание 4
/* Определить функцию для расчета
суммы цифр натурального числа. Входной параметр
– число. Возвращаемое значение – сумма */

int sum_digits_natural_number(int number){
    int sum = 0;
    while (number > 0){
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

// todo: Задание 5
/* Определить функцию для расчета
доли (в процентах) некоторой буквы в предложении.
Входные параметры – строка, символ.
Возвращаемое значение – доля */

float percentage_letter_sentence(char sentence[100], char letter){
    int count = 0;
    for (int i = 0; i < strlen(sentence); i++){
        if (letter == sentence[i]) count++;
    }
    return (float)count / strlen(sentence) * 100;
}

int main(){
    return 0;
}