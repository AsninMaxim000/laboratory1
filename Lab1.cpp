#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

// ������� ��� ������������
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

    if (!does_triangle_exists(tri_side_a, tri_side_b, tri_side_c)) {
        cout << "������������ �� ����������" << endl;
        return 0;
    }
    else {
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
}