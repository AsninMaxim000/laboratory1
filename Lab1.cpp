#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

// Функции для треугольника
bool is_isosceles_triangle(double d, double b, double c) {
    return (d == b || b == c || c == d);
}
double triangle_semiperimeter(double d, double b, double c) {
    return (d + b + c) / 2.0;
}
bool does_triangle_exists(double d, double b, double c) {
    return (d + b > c && b + c > d && c + d > b);
}
double heron_formula(double d, double b, double c) {
    double s = triangle_semiperimeter(d, b, c);
    return sqrt(s * (s - d) * (s - b) * (s - c));
}
double triangle_perimeter(double d, double b, double c) {
    return d + b + c;
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

    if (!does_triangle_exists(tri_side_a, tri_side_b, tri_side_c)) {
        cout << "Треугольника не существует" << endl;
        return 0;
    }
    else {
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
}