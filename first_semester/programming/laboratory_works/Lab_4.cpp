#include <iostream>

int LenArr(){
    int len_arr;
    std::cout << "Введите длинну массива >> ";
    std::cin >> len_arr;
    return len_arr;
}

void CreateArr(int *parr, int len_arr){
    for (int i = 0; i < len_arr; i++)
    {
        std::cout << "Введите значение элемента [" << i << "] >> ";
        std::cin >> *(parr + i);
    }
}

void PrintArray(int *parr, int len_arr){
    std::cout << '[';
    for (int i = 0; i < len_arr; i++)
    {
        std::cout << *(parr + i);
        if (i + 1 < len_arr)
        {
            std::cout << ", ";
        }else{
            std::cout << ']' << std::endl;
        }
    }
    
}

void Сondition(int *parr, double *pout, int len_arr){
    int count = 0;
    for (int i = len_arr - 14; i < len_arr - 3; i++)
    {
        if (i < 0)
        {
            std::cout << "[ERROR] Вы ввели длинну массива не подходящую под условие задачи!" << std::endl;
            break;
        }
        count++;
        (*pout) = (*pout) + *(parr + i);
    }
    (*pout) = (*pout) / count;
}

int main(){
    int len_arr = LenArr();
    int arr[len_arr];
    double out = 0;
    CreateArr(arr, len_arr);
    std::cout << '\n' << "Введённый массив >> ";
    PrintArray(arr, len_arr);
    Сondition(arr, &out, len_arr);
    std::cout << "Среднее арифметическое элементов, лежащих в диапазоне [-14;-3] >> " << out << std::endl;
    return 0;
}