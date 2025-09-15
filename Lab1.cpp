#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

// ������� ��� ������������
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

// �������������� ������ � ������� �������
void uppercase(string& str) {
    transform(str.begin(), str.end(), str.begin(), toupper);
}

// �������������� ������ � ������ �������
void lowercase(string& str) {
    transform(str.begin(), str.end(), str.begin(), tolower);
}

int main() {
    setlocale(LC_CTYPE, "rus");
    //���� ������
    string input_string;
    cout << "������� ������: ";
    cin >> input_string;

    // �������������� �������� ������
    uppercase(input_string);
    cout << "��������������� ������ (������� �������): " << input_string << endl;

    lowercase(input_string);
    cout << "��������������� ������ (������ �������): " << input_string << endl;

    //���� ������ �����������
    double tri_side_a;
    cout << "������� ������ ������� ������������ �: ";
    cin >> tri_side_a;
    cout << endl;
    double tri_side_b;
    cout << "������� ������ ������� ������� ������������ b: ";
    cin >> tri_side_b;
    cout << endl;
    double tri_side_c;
    cout << "������� ������ ������� ������������ c: ";
    cin >> tri_side_c;
    cout << endl;

    cout << "�������� �� ����������������: ";
    if (is_isosceles_triangle(tri_side_a, tri_side_b, tri_side_c))
        cout << "��";
    else
        cout << "���";
    cout << endl;
    cout << "������� (������� ������): " << heron_formula(tri_side_a, tri_side_b, tri_side_c) << endl;
    cout << "��������: " << triangle_perimeter(tri_side_a, tri_side_b, tri_side_c) << endl;
    return 0;
}