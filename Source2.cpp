//Selection sort
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int digitals[5]; // �������� ������ �� 5 �����
    cout << "Enter 5 numbers to fill the array: (Selection sort) " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> digitals[i]; // ��������� ������
    }
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < n; i++) {            //������� ������� � ���������� ���������
        j = i;                               //� ������ � ��� ������� ��������� �������
        for (int k = i; k < n; k++) {
            if (digitals[j] > digitals[k]) {
                j = k;
            }
        }
        tmp = digitals[i];
        digitals[i] = digitals[j];
        digitals[j] = tmp;
    }
    cout << "Array in sorted form: ";
    for (int i = 0; i < 5; i++) {
        cout << digitals[i] << " "; // ������� �������� �������
    }
    return 0;
}