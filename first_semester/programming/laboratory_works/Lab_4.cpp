#include <iostream>

int LenArr(){
    int len_arr;
    std::cout << "Введите длинну массива >> ";
    std::cin >> len_arr;
    return len_arr;
}

void CreateArr(int *parr, int len_arr){
    for (int i = 0; i < len_arr; i++){
        std::cout << "Введите значение элемента [" << i << "] >> ";
        std::cin >> *(parr + i);
    }
}

void PrintArray(int *parr, int len_arr){
    std::cout << '[';
    for (int i = 0; i < len_arr; i++){
        std::cout << *(parr + i);
        if (i + 1 < len_arr){
            std::cout << ", ";
        }else{
            std::cout << ']' << std::endl;
        }
    }
    
}

void Сondition(int *parr, double *pout, int len_arr){
    int count = 0;
    for (int i = 0; i < len_arr; i++){
        if (*(parr + i) <= -3 && *(parr + i) >= -14){
            *pout += *(parr + i);
            count++;
        }
    }
    (*pout) = (*pout) / count;
}

int main(){
    std::cout << "Обработка одномерных массивов\nВариант 17" << std::endl;
    std::cout << "Ввести с клавиатуры одномерный массив. Размерность массива также "
    << "вводится с клавиатуры, но не превышает 15 элементов. Вычислить "
    << "характеристику массива согласно варианту задания. Исходный массив и "
    << "результат вывести на экран в текстовое окно.\n" << std::endl;
    std::cout << "Задание по варианту:" << std::endl;
    std::cout << "Среднее арифметическое элементов, лежащих в диапазоне [-14;-3].\n" << std::endl;
    int len_arr = LenArr();
    int arr[len_arr];
    double out = 0.0;
    CreateArr(arr, len_arr);
    std::cout << '\n' << "Введённый массив >> ";
    PrintArray(arr, len_arr);
    Сondition(arr, &out, len_arr);
    std::cout << "Среднее арифметическое элементов, лежащих в диапазоне [-14;-3] >> " << out << std::endl;
    return 0;
}