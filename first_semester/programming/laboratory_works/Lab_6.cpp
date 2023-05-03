#include <iostream>
#include <iomanip>

void Contents(){
    std::cout << "Работа с подпрограммами\nВариант 17" << std::endl;
    std::cout << "Ввести 3 массива, содержащих соответственно 4, 5 и 4 компонента. Уменьшить "
    << "каждый элемент массивов на 10 и найти количество отрицательных элементов. "
    << "Операции ввода и вывода массивов и формирования новых массивов, "
    << "вычисление количества отрицательных элементов массивов выполнить с "
    << "помощью подпрограмм.\n" << std::endl;
}

void CreateArr(int *parr, int lenArr){
    for (int i = 0; i < lenArr; i++){
        std::cout << "Введите значение элемента [" << i << "] >> ";
        std::cin >> *(parr + i);
    }
}

int RefactorArr(int *parr, int lenArr){
    int count = 0;
    for (int i = 0; i < lenArr; i++){
        *(parr + i) = *(parr + i) - 10;
        if (*(parr + i) < 0){
            count++;
        }
    }
    return count;
}

void PrintArr(int *parr, int lenArr){
    std::cout << std::endl;
    for (int i = 0; i < lenArr; i++){
        std::cout << std::setw(3) << *(parr + i) << std::setw(3);
    }
    std::cout << '\n' << std::endl;
}

void Print(int count1, int count2, int count3){
    std::cout << "Количество отрицательных элементов >> " << count1 + count2 + count3 << std::endl;
}

int main(){
    Contents();
    int count1, count2, count3;
    int lenArr1 = 4;
    int lenArr2 = 5;
    int lenArr3 = 4;
    int arr1[lenArr1], arr2[lenArr2], arr3[lenArr3];
    CreateArr(arr1, lenArr1);
    CreateArr(arr2, lenArr2);
    CreateArr(arr3, lenArr3);
    count1 = RefactorArr(arr1, lenArr1);
    count2 = RefactorArr(arr2, lenArr2);
    count3 = RefactorArr(arr3, lenArr3);
    PrintArr(arr1, lenArr1);
    PrintArr(arr2, lenArr2);
    PrintArr(arr3, lenArr3);
    Print(count1, count2, count3);
    return 0;
}