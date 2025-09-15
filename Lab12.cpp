#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

// ������� ��� ��������������
double rectangle_area(double a, double b) {
    return a * b;
}
double rectangle_perimeter(double a, double b) {
    return 2 * (a + b);
}
double rectangle_diagonal_length(double a, double b) {
    return sqrt(a * a + b * b);
}

// ������� ���������� ������� ����
int count_vowels(const string& str) {
    int vowels_count = 0;
    string vowels = "aeiouy���������";
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
    //����� ���������� ��� ��������������
    cout << "�������������:" << endl;
    double rect_width;
    cout << "������� ������ �������������: ";
    cin >> rect_width;
    cout << endl;
    double rect_length;
    cout << "������� ����� ��������������: ";
    cin >> rect_length;
    cout << endl;

    cout << "�������: " << rectangle_area(rect_width, rect_length) << endl;
    cout << "��������: " << rectangle_perimeter(rect_width, rect_length) << endl;
    cout << "����� ���������: " << rectangle_diagonal_length(rect_width, rect_length) << endl << endl;

    string input_string;
    cout << "������� ������: ";
    cin >> input_string;

    // ������� �������
    int vowel_count = count_vowels(input_string);
    cout << "���������� ������� ����: " << vowel_count << endl;
    return 0;
}
