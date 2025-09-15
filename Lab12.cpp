#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

// Функции для прямоугольника
double rectangle_area(double a, double b) {
    return a * b;
}
double rectangle_perimeter(double a, double b) {
    return 2 * (a + b);
}
double rectangle_diagonal_length(double a, double b) {
    return sqrt(a * a + b * b);
}

// Подсчет количества гласных букв
int count_vowels(const string& str) {
    int vowels_count = 0;
    string vowels = "aeiouyаеёиоуыэюя";
    for (unsigned char ch : str) {
        char lower_ch = tolower(ch);
        if (vowels.find(lower_ch) != string::npos) {
            vowels_count++;
        }
    }
    return vowels_count;
}

int main() {
    setlocale(LC_CTYPE, "rus");
    //вывод параметров для прямоугольника
    cout << "Прямоугольник:" << endl;
    double rect_width;
    cout << "Введите ширину прямоугльника: ";
    cin >> rect_width;
    cout << endl;
    double rect_length;
    cout << "Введите длину прямоугольнкиа: ";
    cin >> rect_length;
    cout << endl;

    cout << "Площадь: " << rectangle_area(rect_width, rect_length) << endl;
    cout << "Периметр: " << rectangle_perimeter(rect_width, rect_length) << endl;
    cout << "Длина диагонали: " << rectangle_diagonal_length(rect_width, rect_length) << endl << endl;

    string input_string;
    cout << "Введите строку: ";
    cin >> input_string;

    // Подсчет гласных
    int vowel_count = count_vowels(input_string);
    cout << "Количество гласных букв: " << vowel_count << endl;
    return 0;
}
