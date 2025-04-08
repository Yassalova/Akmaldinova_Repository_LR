#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

void EnterThreeDigitNumber(int& X) {
// Функция для ввода целого трехзначного числа
}

void EnterDigitN(int X, int& N) {
// Функция для ввода цифры N (меньше числа разрядов числа X)
}

void FirstDigit(int X) {
// Функция для нахождения первой цифры числа X
}

void NthDigit(int X, int N) {
//Функция для нахождения N-й цифры числа X (нумерация справа налево)
}

int main() {
    int choice, X = 0, N = 0;

    do {
        cout << "Меню:\n";
        cout << "1. Ввести целое трехзначное число X\n";
        cout << "2. Ввести цифру N (меньше числа разрядов числа X)\n";
        cout << "3. Найти первую цифру числа X\n";
        cout << "4. Найти N-ю цифру числа X (цифры нумеруются справа налево)\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";
        
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Неверный выбор. Попробуйте снова.\n";
            continue;
        }

        switch (choice) {
        case 1:
            EnterThreeDigitNumber(X);
            break;
        case 2:
            if (X == 0) {
                cout << "Сначала введите число X (пункт 1).\n";
            } else {
                EnterDigitN(X, N);
            }
            break;
        case 3:
            if (X == 0) {
                cout << "Сначала введите число X (пункт 1).\n";
            } else {
                FirstDigit(X);
            }
            break;
        case 4:
            if (X == 0 || N < 0) {
                cout << "Сначала введите число X и цифру N (пункты 1 и 2).\n";
            } else {
                NthDigit(X, N);
            }
            break;
        case 0:
            cout << "Выход из программы.\n";
            break;
        default:
            cout << "Неверный выбор. Попробуйте снова.\n";
        }
    } while (choice != 0);

    return 0;
    
}
