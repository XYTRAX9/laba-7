#include <iostream>
#include <cmath>

using namespace std;

void solveQadratic(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Сообщение: Бесконечное множество решений" << endl;
            } else {
                cout << "Сообщение: Неразрешимое уравнение" << endl;
            }
        } else {
            cout << "Сообщение: Неквадратное уравнение. x =" << -c / b << endl;
        }
        return;
    } 

    double D = b * b - 4 * a * c;

    if (D > 0){
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (D == 0){
        double x = -b / (2 * a);
        cout << "x1 = x2 = " << x << endl; 
    } else {
        cout << "Сообщение: Комплексные корни (нет вещественных корней)" << endl;
    }
}        

int main(){
    double a, b, c;
    cout << "Введите коэффициенты a, b, c: ";
    if (cin >> a >> b >> c) {
        solveQadratic(a, b, c);
    }
    return 0;
}