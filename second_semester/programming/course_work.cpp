#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <string>
#define N 1000

void from_t(int n, double *pt){
    double t_start = 0, t_end = 2 * M_PI;
    double dt = (t_end - t_start) / (n - 1);
    for (int i = 0; i < n; i++) {
        pt[i] = t_start + i * dt;
    }
}

void from_U_in(int n, double *pU_in, double *pt){
    double Ue = 5.0, a = 2.0;
    for (int i = 0; i < n; i++) {
        pU_in[i] = pow(Ue, a * sin(pt[i]));
    }
}

void from_U_out(int n, double *pU_out, double *pU_in){
    double U_out1 = 10.0, a = 2.0, b = 0.05;
    for (int i = 0; i < n; i++) {
        if (pU_in[i] <= U_out1) {
            pU_out[i] = a;
        }else{
            pU_out[i] = b * pow(pU_in[i], 2);
        }
    }
}

void from_table(int n, double *pt, double *pU_in, double *pU_out){
    std::cout << "\n    №          t       U_in      U_out" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << std::setw(5) << i << std::setw(11) << pt[i] << std::setw(11) << pU_in[i] << std::setw(11) << pU_out[i] << std::endl;
    }
}

void maxImpuls(int n, double *pU_in, double *pt, double *time){
    double U_inMax = pU_in[0];
    for (int i = 0; i < n; i++) {
        if (U_inMax <= pU_in[i]) {
            U_inMax = pU_in[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (pU_in[i] == U_inMax){
            *time = pt[i];
            break;
        }
    }
    
}

void inaccuracy(double *pt, double *pU_in, double *time){
    int n = 11;
    double p = 1;
    double eps = 0.001;
    double par = 100000;
    std::cout << "\nРасчет погрешности с начального значения n = " << n << ":" <<std::endl;
    while (p > eps) {
        from_t(n, pt);
        from_U_in(n, pU_in, pt);
        maxImpuls(n, pU_in, pt, time);
        p = fabs(par - *time) / *time;
        std::cout << "\nn = " << n << "\nparametr = " << *time <<
        "\npogrechnost = " << p << std::endl;
        par = *time;
        n = 2 * n;
    }
}

int write(char namefile[20], int n, double *pt, double *pU_in, double *pU_out){
    char symbol;
    int f = 1;
    std::ofstream file;
    file.open(namefile);
    if (!file.is_open()) {
        std::cout << "\nОшибка открытия файла!" << std::endl;
        return 1;
    }
    std::cout << "\nКакой из массивов Вы хотите записать?\n1 - t[" << n << "]\n2 - U_in[" << n << "]\n3 - U_out[" << n << "]\n>> ";
    
    while (f == 1) {
        std::cin >> symbol;
        if (symbol == '1' || symbol == '2' || symbol == '3') {
            f = 0;
        }else{
            std::cout << "Вы ввели некоректную команду!\n>> ";
        }
    }
    switch (symbol)
    {
    case '1':
        for (int i = 0; i < n; i++) {
            file << pt[i];
            if (i != (n - 1)){
                file << ' ';
            }
        }
        file.close();
        break;
    case '2':
        for (int i = 0; i < n; i++) {
            file << pU_in[i];
            if (i != (n - 1)){
                file << ' ';
            }
        }
        file.close();
        break;
    case '3':
        for (int i = 0; i < n; i++) {
            file << pU_out[i];
            if (i != (n - 1)){
                file << ' ';
            }
        }
        file.close();
        break;
    default:
        break;
    }

    return 0; 
}

int read(char namefile[20]){
    std::string line;
    std::ifstream file;
    file.open(namefile);
    if (!file.is_open()) {
        std::cout << "Ошибка открытия файла!" << std::endl;
        return 1;
    }
    while (std::getline(file, line)){
        std::cout << line << std::endl;
    }
    return 0;
}

void exit(int &fMain, char &symbol){
    int f = 1;
    std::cout << "\nМожет быть продолжим?\n1 - Да\n2 - Нет\n>> ";
    while (f == 1) {
                std::cin >> symbol;
                if (symbol == '1' || symbol == '2') {
                    f = 0;
                }else{
                    std::cout << "Вы ввели некоректную команду!\n>> ";
                }
            }
            switch (symbol)
            {
            case '1':
                fMain = 0;
                break;
            case '2':
                fMain = 1;
                break;
            default:
                break;
            }
}

int main(){
    double t[N], U_in[N], U_out[N];
    double time = 0.0;
    int n = 0;
    int fMain = 0;
    char namefile[20];
    while (fMain == 0){
        char symbolMain, symbol;
        std::cout << "\nМеню\n1 - Контрольный расчет для N точек\n2 - Расчет параметра с заданной точностью" <<
        "\n3 - Запись/перезапись данных в файл\n4 - Чтение данных из файла\n5 - Выход из программы\n>> ";
        fMain = 1;
        while (fMain == 1) {
                std::cin >> symbolMain;
                if (symbolMain == '1' || symbolMain == '2' || symbolMain == '3' || symbolMain == '4' || symbolMain == '5') {
                    fMain = 0;
                }else{
                    std::cout << "Вы ввели некоректную команду!\n>> ";
                }
            }
        switch (symbolMain)
        {
        case '1':
            std::cout << "\nВведите кол-во точек для контрольного расчета\n>> ";
            std::cin >> n;

            from_t(n, t);
            from_U_in(n, U_in, t);
            from_U_out(n, U_out, U_in);
            from_table(n, t, U_in, U_out);

            exit(fMain, symbol);
            break;
        case '2':
            if (n == 0) {
                std::cout << "\nПока ещё нечего записать!" << std::endl;
                exit(fMain, symbol);
                break;
            }else{
                maxImpuls(n, U_in, t, &time);
                std::cout << "\nМомента времени, при котором U_in достигает максимума (для " << n << " точек): " << time << std::endl;

                inaccuracy(t, U_in, &time);

                exit(fMain, symbol);
            }
            break;
        case '3':
            if (n == 0) {
                std::cout << "\nПока ещё нечего записать!" << std::endl;
                exit(fMain, symbol);
                break;
            }else{
                std::cout << "\nВведите название файла\n>> ";
                std::cin >> namefile;

                write(namefile, n, t, U_in, U_out);

                exit(fMain, symbol);
            }
            break;
        case '4':
            std::cout << "Введите название файла\n>> ";
            std::cin >> namefile;
            
            read(namefile);

            exit(fMain, symbol);
            break;
        case '5':
            exit(fMain, symbol);
            break;
        default:
            break;
        }
    }
    return 0;
}