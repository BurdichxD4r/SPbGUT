#include <iostream>
#include <string.h>

// todo: Решить задачи пятью способами организации циклов

// todo: Задача 1
// Необходимо вывести на экран числа от 1 до 5. На экране должно быть: 1 2 3 4 5

int numbers_from_one_to_five(){
    using namespace std;
    cout << '\n' << "Задание 1" << endl;
    int last_number = 5;
    int first_number = 1;
    while (first_number <= last_number){
        cout << first_number << " ";
        first_number += 1;
    }
    cout << '\n';
    return 0;
}

// todo: Задача 2
// Необходимо вывести на экран числа от 5 до 1. На экране должно быть: 5 4 3 2 1

int numbers_from_five_to_one(){
    using namespace std;
    cout << '\n' << "Задание 2" << endl;
    int last_number = 1;
    int first_number = 5;
    do
    {
        cout << first_number << " ";
        first_number -= 1;
    } while (first_number >= last_number);
    cout << '\n';
    return 0;
}

// todo: Задача 3
// Необходимо вывести на экран таблицу умножения на 3

int multiplication_table_by_three(){
    using namespace std;
    cout << '\n' << "Задание 3" << endl;
    int last_number = 10;
    int first_number = 1;
    for (first_number; first_number <= last_number; first_number++){
        cout << "3 * " << first_number << " = " << first_number * 3 << endl;
    }
    return 0;
}

// todo: Задача 4
/* Пользователь вводит любое целое положительное число. Программа суммирует все числа от 1 до
введенного пользователем числа */

int sum_of_all_numbers(){
    using namespace std;
    cout << '\n' << "Задание 4" << endl;
    int first_namber = 1;
    int last_number, sum;
    cout << "Введите последнее число -> ";
    cin >> last_number;
    for (first_namber; first_namber <= last_number; first_namber++){
        sum += first_namber;
    }
    cout << "Сумма всех чисел - " << sum << endl;
    return 0;
}

// todo: Задача 5
// Вывести числа от 0 до 99, по 10 в каждой строке

int table_hundreds_numbers(){
    using namespace std;
    cout << '\n' << "Задание 5" << endl;
    int first_number = 0;
    int last_number = 99;
    int line_feed = 1;
    int max_number_in_line = 10;
    for (first_number; first_number <= last_number; first_number++, line_feed++){
        if (first_number < 10){cout << " ";}
        cout << first_number << " ";
        if (line_feed % max_number_in_line == 0){cout << '\n';}
    }
    return 0;
}

// todo: Задача 6
// Вывести числа от 0 до 99 ниже главной диагонали:

int table_hundreds_numbers_below_main_diagonal(){
    using namespace std;
    cout << '\n' << "Задание 6" << endl;
    int first_number = 0;
    int last_number = 99;
    int max_number_in_line = 1;
    int line_feed = 0;
    int count_to_number = 9;
    for (first_number; first_number <= last_number; first_number++){
        if (line_feed < max_number_in_line){
            if (first_number < 10){cout << " ";}
            cout << first_number << " ";
            line_feed++;
        }else if (first_number == count_to_number){
            cout << '\n';
            count_to_number += 10;
            goto switching_new_line;
        }else{
            continue;
        }
        if (false){
            switching_new_line:
                max_number_in_line++;
                line_feed = 0;
        }
    }
    cout << endl;
    return 0;
}

// todo: Задача 7
// Вывести числа от 0 до 99 исключая числа, оканчивающиеся на 5 или 8

int table_hundreds_numbers_with_exceptions(){
    using namespace std;
    cout << '\n' << "Задание 7" << endl;
    int first_number = 0;
    int last_number = 99;
    int line_feed = 1;
    int max_number_in_line = 10;
    for (first_number; first_number <= last_number; first_number++, line_feed++){
        if (first_number != 5 && first_number != 8 && to_string(first_number)[1] != '5'
            && to_string(first_number)[1] != '8'){
                if (first_number < 10){cout << " ";}
                cout << first_number << " ";
                if (line_feed % max_number_in_line == 0){cout << '\n';}
            }
        
    }
    return 0;
}

int main(){
    numbers_from_one_to_five();
    numbers_from_five_to_one();
    multiplication_table_by_three();
    sum_of_all_numbers();
    table_hundreds_numbers();
    table_hundreds_numbers_below_main_diagonal();
    table_hundreds_numbers_with_exceptions();
    return 0;
}