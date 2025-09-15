#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

// Функции для треугольника
bool is_isosceles_triangle(double a, double b, double c) {
    return (a == b || b == c || c == a);
}
double triangle_semiperimeter(double a, double b, double c) {
    return (a + b + c) / 2.0;
}
double heron_formula(double a, double b, double c) {
    double s = triangle_semiperimeter(a, b, c);
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
double triangle_perimeter(double a, double b, double c) {
    return a + b + c;
}

// Преобразование строки в верхний регистр
void uppercase(string& str) {
    transform(str.begin(), str.end(), str.begin(), toupper);
}

// Преобразование строки в нижний регистр
void lowercase(string& str) {
    transform(str.begin(), str.end(), str.begin(), tolower);
}

int main() {
    setlocale(LC_CTYPE, "rus");
    //Ввод строки
    string input_string;
    cout << "Введите строку: ";
    cin >> input_string;

    // Преобразование регистра строки
    uppercase(input_string);
    cout << "Преобразованная строка (верхний регистр): " << input_string << endl;

    lowercase(input_string);
    cout << "Преобразованная строка (нижний регистр): " << input_string << endl;

    //Ввод данных треугольнка
    double tri_side_a;
    cout << "Введите первую сторону треугольника а: ";
    cin >> tri_side_a;
    cout << endl;
    double tri_side_b;
    cout << "Введите вторую сторону сторону треугольника b: ";
    cin >> tri_side_b;
    cout << endl;
    double tri_side_c;
    cout << "Введите третью сторону треугольника c: ";
    cin >> tri_side_c;
    cout << endl;

    cout << "Проверка на равнобедренность: ";
    if (is_isosceles_triangle(tri_side_a, tri_side_b, tri_side_c))
        cout << "Да";
    else
        cout << "Нет";
    cout << endl;
    cout << "Площадь (формула Герона): " << heron_formula(tri_side_a, tri_side_b, tri_side_c) << endl;
    cout << "Периметр: " << triangle_perimeter(tri_side_a, tri_side_b, tri_side_c) << endl;
    return 0;
}