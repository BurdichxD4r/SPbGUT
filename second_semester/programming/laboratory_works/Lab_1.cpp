#include <iostream>
#include <fstream>
#include <string>

struct PhoneRecord {
        char lastName[20];
        double timeCall;
        double costPerMinute;
    };

void refactorData(PhoneRecord *data, int i){
    std::cout << "Введите новое значение (Фамилия абонента) >> ";
    std::cin >> data[i].lastName;
    std::cout << "Введите новое значение (Продолжительность разговора в мин.) >> ";
    std::cin >> data[i].timeCall;
    std::cout << "Введите новое значение (Стоимость минуты разговора) >> ";
    std::cin >> data[i].costPerMinute;
}

int main(){
    std::cout << "Лабораторная работа № 1\nОбработка данных в виде массива структур средствами языка С++\n" <<
    "Вариант 17\nКоличество строк:   5.   Столбцы:   Фамилия абонента,   Продолжительность разговора в мин., " <<
    "Стоимость минуты разговора. Вычислить стоимость всех разговоров." << std::endl;

    char filename[10] = "file.txt";

    int catalog = 0;
    std::string line;
    std::ifstream file(filename);
    while (std::getline(file, line)){
        catalog++;
    }
    file.close();
    
    PhoneRecord data[catalog];

    std::ifstream infile(filename);

    if (!infile.is_open()) {
        std::cout << "Ошибка открытия файла!" << std::endl;
        return 1;
    }else{
        std::cout << "Файл успешно открыт!" << std::endl;
    }

    for (int i = 0; i < catalog; i++) {
        infile >> data[i].lastName >> data[i].timeCall >> data[i].costPerMinute;
    }

    std::cout << "Данные из файла \"" << filename << "\":" << std::endl;
    for (int i = 0; i < catalog; i++) {
        std::cout << data[i].lastName << ' ' << data[i].timeCall << ' ' << data[i].costPerMinute << std::endl;
    }

    infile.close();

    int f = 1, index;
    while (f != 2){
        std::cout << "Хотите корректиктировать данные заданной строки?\n1 - да\n2 - нет\n>> ";
        std::cin >> f;
        if (f == 1) {
            std::cout << "Введите номер строки [1; 5] >> ";
            std::cin >> index;
            index--;
            if (index >= 0 && index <= 4){
                refactorData(data, index);
            }else{
                std::cout << "Вы ввели некоректный номер строки!" << std::endl;
            }
        }else if (f == 2){
            std::cout << "Данные сохранены!" << std::endl;
        }else{
            std::cout << "Вы ввели некоректную команду!" << std::endl;
        }
    }
    

    double costOfAllConversations = 0;
    for (int i = 0; i < catalog; i++) {
        costOfAllConversations += data[i].timeCall * data[i].costPerMinute;
    }

    std::cout << "Стоимость всех разговоров >> " << costOfAllConversations << " руб." << std::endl;
    
    return 0;
}