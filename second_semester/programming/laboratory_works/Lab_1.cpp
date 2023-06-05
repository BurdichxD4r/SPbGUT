#include <iostream>
#include <fstream>

struct PhoneRecord {
        char lastName[20];
        double timeCall;
        double costPerMinute;
    };

int main(){
    std::cout << "Лабораторная работа № 1\nОбработка данных в виде массива структур средствами языка С++\n" <<
    "Вариант 17\nКоличество строк:   5.   Столбцы:   Фамилия абонента,   Продолжительность разговора в мин., " <<
    "Стоимость минуты разговора. Вычислить стоимость всех разговоров." << std::endl;
    int catalog = 5;
    PhoneRecord data[catalog];

    char filename[10] = "file.txt";

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

    double costOfAllConversations = 0;
    for (int i = 0; i < catalog; i++) {
        costOfAllConversations += data[i].timeCall * data[i].costPerMinute;
    }

    std::cout << "Стоимость всех разговоров >> " << costOfAllConversations << " руб." << std::endl;
    
    return 0;
}