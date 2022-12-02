#include <iostream>

// todo: Задача 1
/* Найти максимальное число из трех:
Вводятся три целых числа. Определить какое из них наибольшее.
a, b, c – переменные, которым присваиваются введенные числа. */

int maximum_number_of_three_entered(){
    using namespace std;
    cout << "Задание 1 (поиск максимума из трёх чисел)" << endl;
    int a, b, c;
    cout << "Введите первое число -> ";
    cin >> a;
    cout << "Введите второе число -> ";
    cin >> b;
    cout << "Введите третье число -> ";
    cin >> c;
    int __flag = 0;
    if (a - b >= __flag && a - c >= __flag){
        cout << a << endl;
        return a;
    }else if (b - c >= __flag){
        cout << b << endl;
        return b;
    }else{
        cout << c << endl;
        return c;
    }
}

// todo: Задача 2
/* Вычислить значение функции y=f(x)
Дана следующая функция y=f(x): y = 2x — 10, если x > 0; y = 0, если x = 0;
y = 2 * |x| — 1, если x < 0
Требуется найти значение функции */

int calculate_the_value_of_the_function(){
    using namespace std;
    cout << "Задание 2 (вычисление значения функции y = f(x))" << endl;
    int x;
    cout << "Введите значение x -> ";
    cin >> x;
    if (x > 0){
        cout << "y = " << 2 * x - 10 << endl;
        return 2 * x - 10;
    }else if (x < 0){
        cout << "y = " << 2 * (-x) - 1 << endl;
        return 2 * (-x) - 1;
    }else{
        cout << "y =  0" << endl;
        return 0;
    }
}

// todo: Задача 3
// Определить является ли число N кратным числу K

int number_a_multiple(){
    using namespace std;
    cout << "Задание 3 (определить является ли число N кратным числу K)" << endl;
    int N, K;
    cout << "Введите число N -> ";
    cin >> N;
    cout << "Введите число K -> ";
    cin >> K;
    if (N % K == 0){
        cout << N << " является кратным числу " << K << endl;
        return 1;
    }else{
        cout << N << " не является кратным числу " << K << endl;
        return 0;
    }
}

// todo: Задача 4.1
/* Написать программу вычисления стоимости покупки с учетом скидки.
Скидка в 3% предоставляется, если сумма покупки больше 500 руб, в 5% — если сумма
больше 1000 руб. */
int purchase_price_including_discount(){
    using namespace std;
    cout << "Задание 4.1" << endl;
    cout << "Вычисление стоимости покупки с учетом скидки:" << endl;
    int purchase_amount;
    cout << "Введите сумму покупки и нажмите <Enter> -> ";
    cin >> purchase_amount;
    if (purchase_amount < 0){
        cout << "Не пытайтесь нас обмануть!" << endl;
        return 0;
    }
    float first_class_discount = 0.03;
    float second_class_discount = 0.05;
    int beginning_first_category = 500; // руб.
    int beginning_second_category = 1000; // руб.
    if (beginning_second_category >= purchase_amount > beginning_first_category){
        cout << "Вам предоставляется скидка " << first_class_discount * 100 << "%" << endl;
        cout << "Сумма с учетом скидки: " << purchase_amount - (purchase_amount * first_class_discount) << " руб." << endl;
        return purchase_amount - (purchase_amount * first_class_discount);
    }else if (purchase_amount > beginning_second_category){
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
/* Написать программу проверки знания даты основания Санкт-Петербурга.
В случае неправильного ответа пользователя, программа должна выводить правильную дату */

int verification_foundation_of_Petersburg(){
    using namespace std;
    cout << "Задание 4.2" << endl;
    cout << "В каком году был основан Санкт-Петербург?" << endl;
    int date_of_foundation_of_the_city = 1703;
    int user_response;
    cin >> user_response;
    if (user_response == date_of_foundation_of_the_city){
        cout << "Вы ответили верно!" << endl;
        return 1;
    }else{
        cout << "Вы ошиблись, Санкт-Петербург был основан в " << date_of_foundation_of_the_city << " году" << endl;
        return 0;
    }
}

// todo: Задача 5
/* Написать программу, которая проверяет, является ли введенное пользователем
целое число четным. */

int determining_the_parity_of_number(){
    using namespace std;
    cout << "Задача 5" << endl;
    cout << "Проверка чётности числа" << endl;
    int user_number;
    cout << "Введите число -> ";
    cin >> user_number;
    if (user_number % 2 == 0){
        cout << "Число " << user_number << " чётное" << endl;
        return 1;
    }else{
        cout << "Число " << user_number << " нечётное" << endl;
        return 0;
    }
}

// todo: Задача 6
/* Написать программу, которая вычисляет оптимальный вес человека, сравнивает его
с реальным и выдает рекомендацию о необходимости поправиться или похудеть.
Оптимальный вес вычисляется по формуле: Рост (см) – 100 */

int calculating_the_optimal_weight(){
    using namespace std;
    int height;
    cout << "Введите свой нынешний рост -> ";
    cin >> height;
    int formula_calculating_the_optimal_weight = height - 100;
    return formula_calculating_the_optimal_weight;
}
int weight_change_recommendation(){
    using namespace std;
    cout << "Задача 6" << endl;
    int weight;
    cout << "Введите свой нынешний вес -> ";
    cin >> weight;
    int optimal_weight = calculating_the_optimal_weight();
    if (weight > optimal_weight){
        cout << "Вам не помешало бы слегка сбросить вес (на " << weight - optimal_weight << " кг)" << endl;
        return 1;
    }else if (weight < optimal_weight){
        cout << "Вам не помешало бы слегка набрать вес (на " << optimal_weight - weight << " кг)" << endl;
        return -1;
    }else{
        cout << "У Вас оптимальный вес" << endl;
        return 0;
    }
}

// todo: Задачи на switch
// Дан порядковый номер дня недели, вывести на экран его название

void weekday(){
    using namespace std;
    cout << "Задача на switch 1" << endl;
    int day_of_the_week;
    cout << "Введите день недели -> ";
    cin >> day_of_the_week;
    switch (day_of_the_week){
        case 1:
            cout << "Понедельник" << endl;
            break;
        case 2:
            cout << "Вторник" << endl;
            break;
        case 3:
            cout << "Среда" << endl;
            break;
        case 4:
            cout << "Четверг" << endl;
            break;
        case 5:
            cout << "Пятница" << endl;
            break;
        case 6:
            cout << "Суббота" << endl;
            break;
        case 7:
            cout << "Воскресенье" << endl;
            break;
        default:
            cout << "Error! Bad input!" << endl;
            break;
    }
}

/* Дан порядковый номер карты от 6 до 14, определить ее достоинство. Достоинства определяются по
следующему правилу: туз -14, король - 13, дама -12, валет -11, десятка - 10, ... , шестерка – 6 */

void card_from_the_deck(){
    using namespace std;
    cout << "Задача на switch 2" << endl;
    int dignity_of_the_card;
    cout << "Введите достоинство карты -> ";
    cin >> dignity_of_the_card;
    switch (dignity_of_the_card){
        case 6:
            cout << "Шестёрка" << endl;
            break;
        case 7:
            cout << "Семёрка" << endl;
            break;
        case 8:
            cout << "Восьмёрка" << endl;
            break;
        case 9:
            cout << "Девятка" << endl;
            break;
        case 10:
            cout << "Десятка" << endl;
            break;
        case 11:
            cout << "Валет" << endl;
            break;
        case 12:
            cout << "Дама" << endl;
            break;
        case 13:
            cout << "Король" << endl;
            break;
        case 14:
            cout << "Туз" << endl;
            break;
        default:
            cout << "Error! Bad input!" << endl;
            break;
    }
}

/* Дан признак транспортного средства: а - автомобиль, в - велосипед, м - мотоцикл, с - самолет, п - поезд.
Вывести на экран монитора максимальную скорость транспортного средства в зависимости от введенного
признака */

void maximum_vehicle_speed(){
    using namespace std;
    cout << "Задача на switch 3" << endl;
    char transport_vehicle_char;
    int transport_vehicle_int;
    cout << "Введите первую букву транспортного средства -> ";
    cin >> transport_vehicle_char;
    cout << transport_vehicle_char << endl;
    /* В данном случае затруднительно воспользоваться switch-case, так как
    конструкция switch-case в C++ поддерживает только тип int. Так же я не понимаю
    как сделать так, чтобы cin воспринимал русские символы */
    if (transport_vehicle_char == 'c'){
        transport_vehicle_int = 1;
    }else if (transport_vehicle_char == 'b'){
        transport_vehicle_int = 2;
    }else if (transport_vehicle_char == 'm'){
        transport_vehicle_int = 3;
    }else if (transport_vehicle_char == 'p'){
        transport_vehicle_int = 4;
    }else if (transport_vehicle_char == 't'){
        transport_vehicle_int = 5;
    }else{
        transport_vehicle_char = 0;
    }
    switch (transport_vehicle_int){
        case 1:
            cout << "У автомобиля максимальная скорость - 1230 км/ч" << endl;
            break;
        case 2:
            cout << "У велосипеда максимальная скорость - 268 км/ч" << endl;
            break;
        case 3:
            cout << "У мотоцикла максимальная скорость - 395 км/ч" << endl;
            break;
        case 4:
            cout << "У самолёта максимальная скорость - 11230 км/ч" << endl;
            break;
        case 5:
            cout << "У поезда максимальная скорость - 603 км/ч" << endl;
            break;
        default:
            cout << "Error! Bad input!" << endl;
            break;
    }
}

int main(int argc, char **argv){
    /* maximum_number_of_three_entered();
    calculate_the_value_of_the_function();
    number_a_multiple();
    purchase_price_including_discount();
    verification_foundation_of_Petersburg();
    determining_the_parity_of_number();
    weight_change_recommendation(); */
    weekday();
    card_from_the_deck();
    maximum_vehicle_speed();
    return 0;
}