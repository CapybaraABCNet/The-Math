#include <iostream>
#include <string>

using namespace std;

void game() {
    double ii;
    double gg;
    for (ii = 1; ii < 20; ii++) {
        int numb1 = 1 + rand() % 200;
        int numb2 = 1 + rand() % 200;
        std::cout << numb1 << " + " << numb2 << " = " << std::endl;
        std::cin >> gg;
        if (gg == numb1 + numb2) {
            std::cout << "Правильно!" << std::endl;
        }
        else {
            std::cout << "Не правильно!" << std::endl;
            return;
        }
    }
}

void calculator() {
    double a;
    double b;
    string d;
    while (true) {
        cout << "введите первое число: ";
        cin >> a;
        cout << "введите второе число: ";
        cin >> b;
        cout << "Введите мат. операцию (+,-,*,/): ";
        cin >> d;
        if (d == "+") {
            cout << a << " + " << b << " = " << a + b << endl;
        }
        else if (d == "-") {
            cout << a << " - " << b << " = " << a - b << endl;
        }
        else if (d == "*") {
            cout << a << " * " << b << " = " << a * b << endl;
        }
        else if (d == "/") {
            if (b == 0) {
                cout << "нельзя делить на ноль" << endl;
            }
            else {
                cout << a << " / " << b << a / b << endl;
            }
        }
    }
}


void p() {
    string ddd;
    double sss;
    double ss;
    cout << "Введите фигуру: квадрат, прямоугольник, треугольник (чтобы ввести фигуру используйте числа, например: квадрат это 1, т.е вводим 1" << endl;
    cin >> ddd;
    if (ddd == "1") {
        cout << "введите длину: ";
        cin >> sss;
        cout << "P = " << sss * 4 << endl;
        cout << "S = " << sss * sss << endl;
    }
    else if (ddd == "2") {
        cout << "введите длину: ";
        cin >> sss;
        cout << "введите ширину: ";
        cin >> ss;
        cout << "P = " << (sss+ss) * 2 << endl;
        cout << "S = " << sss * ss << endl;
    }
    else if (ddd == "3") {
        cout << "введите длину: ";
        cin >> sss;
        cout << "введите ширину: ";
        cin >> ss;
        cout << "P = " << sss*2 + ss << endl;
        cout << "S = " << ss/2 * sss << endl;
    }
    else {
        cout << "видимо вы не правильно ввели команду, попробуйте снова" << endl;
    }
}

int main()
{
    string vopros;
    setlocale(LC_ALL, "Russian");
    cout << "The math" << endl;
    cout << "---------" << endl;
    cout << "Привет! Это приложение 'The Math', тут есть многое:" << endl;
    cout << "game - математическая игра" << endl;
    cout << "calculator - калькулятор" << endl;
    
    cout << "p - нахождения периметра и площади" << endl;
    cin >> vopros;
    if (vopros == "game") {
        game();
    }
    else if (vopros == "calculator") {
        calculator();
    }
    else if (vopros == "p") {
        p();
    }
    else {
        cout << "видимо вы не правильно ввели команду, попробуйте снова" << endl;
    }
}