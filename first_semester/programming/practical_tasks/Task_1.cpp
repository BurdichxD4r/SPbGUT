#include <iostream>

// todo: Задача 1
// Найти максимальное число из трех:
// Вводятся три целых числа. Определить какое из них наибольшее.
// a, b, c – переменные, которым присваиваются введенные числа.

int maximum_number_of_three_entered(){
    using namespace std;
    int a = cin >> a;
    int b = cin >> b;
    int c = cin >> c;
    int __flag = 0;
    if a - b >= __flag and a - c >= __flag{
        cout << a;
        return a;
    }
    else if b - c >= __flag{
        cout << b;
        return b;
    }
    else
    {
        cout << c;
        return c;
    }
}

// todo: Задача 2
// Вычислить значение функции y=f(x)
// Дана следующая функция y=f(x): y = 2x — 10, если x > 0; y = 0, если x = 0; y = 2 * |x| — 1, если x < 0
// Требуется найти значение функции

int calculate_the_value_of_the_function(){
    using namespace std;
    int x = cin >> x;
    if x > 0{
        cout << "y = " << 2 * x - 10 << endl;
        return 2 * x - 10
    }
    else if x < 0{
        cout << "y = " << 2 * (-x) - 1 << endl;
        return 2 * (-x) - 1;
    }
    else{
        cout << "y =  0";
        return 0;
    }
}

// todo: Задача 3
// Определить является ли число N кратным числу K

int number_a_multiple(){
    using namespace std;
    int N = cin >> N;
    int K = cin >> K;
    if N % K == 0{
        cout << N << " является кратным числу " << K << endl;
        return 1;
    }else{
        cout << N << " не является кратным числу " << K << endl;
        return 0;
    }
}

// todo: Задача 4.1
// Написать программу вычисления стоимости покупки с учетом скидки.
// Скидка в 3% предоставляется, если сумма покупки больше 500 руб, в 5% — если сумма больше 1000 руб.

int purchase_price_including_discount(){
    using namespace std;
    cout << "Вычисление стоимости покупки с учетом скидки:" << endl;
    int purchase_amount = cin >> "Введите сумму покупки и нажмите <Enter> -> " >> purchase_amount;
    if purchase_amount < 0{
        cout << "Не пытайтесь нас обмануть!" << endl;
        return 0
    }
    float first_class_discount = 0.03
    float second_class_discount = 0.05
    int beginning_first_category = 500 // руб.
    int beginning_second_category = 1000 // руб.
    if beginning_second_category >= purchase_amount > beginning_first_category{
        cout << "Вам предоставляется скидка " << first_class_discount * 100 << "%" << endl;
        cout << "Сумма с учетом скидки: " << purchase_amount - (purchase_amount * first_class_discount) << " руб." << endl;
        return purchase_amount - (purchase_amount * first_class_discount);
    }else if purchase_amount > beginning_second_category{
        cout << "Вам предоставляется скидка " << second_class_discount * 100 << "%" << endl;
        cout << "Сумма с учетом скидки: " << purchase_amount - (purchase_amount * second_class_discount) << " руб." << endl;
        return purchase_amount - (purchase_amount * second_class_discount);
    }else{
        cout << "Вам предоставляется скидка 0%" << endl;
        cout << "Сумма с учетом скидки: " << purchase_amount << " руб." << endl;
        return purchase_amount;
    }
}

// todo: Задача 4.2
// Написать программу проверки знания даты основания Санкт-Петербурга.
// В случае неправильного ответа пользователя, программа должна выводить правильную дату

int verification_foundation_of_Petersburg(){
    using namespace std;
    cout << "В каком году был основан Санкт-Петербург?" << endl;
    int date_of_foundation_of_the_city = 1703;
    int user_response = cin >> user_response;
    if user_response == date_of_foundation_of_the_city{
        cout << "Вы ответили верно!" << endl;
        return 1;
    }else{
        cout << "Вы ошиблись, Санкт-Петербург был основан в " << date_of_foundation_of_the_city << " году" << endl;
        return 0;
    }
}

// todo: Задача 5
// Написать программу, которая проверяет, является ли введенное пользователем целое число четным.

int determining_the_parity_of_number(){
    using namespace std;
    cout << "Проверка чётности числа" << endl;
    int user_number = cin >> "Введите число -> " >> user_number;
    if user_number % 2 == 0{
        cout << "Число " << user_number << " чётное" << endl;
        return 1;
    }else{
        cout << "Число " << user_number << " нечётное" << endl;
        return 0;
    }
}

// todo: Задача 6
// Написать программу, которая вычисляет оптимальный вес человека, сравнивает его с реальным и выдает
// рекомендацию о необходимости поправиться или похудеть.
// Оптимальный вес вычисляется по формуле: Рост (см) – 100

int calculating_the_optimal_weight(){
    using namespace std;
    int height = cin >> "Введите свой нынешний рост -> " >> height;
    int formula_calculating_the_optimal_weight = height - 100;
    return formula_calculating_the_optimal_weight;
}

int weight_change_recommendation(){
    using namespace std;
    int weight = cin >> "Введите свой нынешний вес -> " >> weight;
    int optimal_weight = calculating_the_optimal_weight();
    if weight > optimal_weight{
        cout << "Вам не помешало бы слегка сбросить вес (на " << weight - optimal_weight << " кг)" << endl;
        return 1;
    }else if weight < optimal_weight{
        cout << "Вам не помешало бы слегка набрать вес (на " << optimal_weight - weight << " кг)" << endl;
        return -1;
    }else{
        cout << "У Вас оптимальный вес" << endl;
        return 0;
    }
}

// todo: Задачи на switch
// Дан порядковый номер дня недели, вывести на экран его название



void main(){
    maximum_number_of_three_entered();
    calculate_the_value_of_the_function();
    number_a_multiple();
    purchase_price_including_discount();
    verification_foundation_of_Petersburg();
    determining_the_parity_of_number();
    weight_change_recommendation();
    return 0;
}