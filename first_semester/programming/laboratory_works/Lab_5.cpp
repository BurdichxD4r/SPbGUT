#include <iostream>
#include <algorithm>
#include <iomanip>

void sumNumber(int *psum, int number){
    (*psum) = (*psum) + number;
}

int main(){
    std::cout << "Обработка двумерных массивов" << '\n' << "Вариант 17" << std::endl;
    std::cout << "Ввести с клавиатуры двумерный массив размерностью N*M. (N<=5,M<=5)." << '\n'
    << "Вычислить характеристику массива согласно номеру задания." << '\n'
    << "Вывести на экран результат и исходный массив в виде матрицы." << '\n' << std::endl;
    std::cout << "Задание по варианту:" << '\n'
    << "Сумму максимального и минимального элементов массива и среднее арифметическое элементов в каждом столбце." << '\n' << std::endl;
    int N, M, **array, maxx, minn;
    int sum= 0;

    std::cout << "Введите N >> ";
    std::cin >> N;
    std::cout << "Введите M >> ";
    std::cin >> M;

    int arrColumn[N];

    array = new int * [N];
    for (int i = 0; i < N; i++){
        array[i] = new int [M];
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            std::cout << "Введите значение элемента [" << i << "][" << j << "] >> ";
            int input;
            std::cin >> input;
            maxx, minn = input;
            array[i][j] = input;
        }
    }

    std::cout << std::endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            minn = std::min(minn, array[i][j]);
            maxx = std::max(maxx, array[i][j]);
            std::cout << std::setw(5) << array[i][j] << std::setw(5);
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Сумму максимального и минимального элементов массива (" << maxx << "; " << minn << ") >> " << minn + maxx << std::endl;

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            sumNumber(&sum, array[j][i]);
        }
        std::cout << "Среднее арифметическое элементов в " << i + 1 << " столбце >> " << sum << std::endl;
        sum = 0;
    }
    
    for (int i = 0; i < N; i++){
        delete [] array[i];
    }
    delete [] array;
    
    return 0;
}