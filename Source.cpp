// Bubble Sort
#include <iostream>
using namespace std;
int main() {
    int digitals[5]; // �������� ������ �� 5 �����
    cout << "Enter 5 numbers to fill the array: (Bubble sort) " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> digitals[i]; // ��������� ������
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (digitals[j] > digitals[j + 1]) {
                int b = digitals[j]; // ������� �������������� ����������
                digitals[j] = digitals[j + 1]; // ������ �������� ������� �� �������
                digitals[j + 1] = b; // ���������� �������� ���������
            }
        }
    }
    cout << "Array in sorted form: ";
    for (int i = 0; i < 5; i++) {
        cout << digitals[i] << " "; // ������� �������� �������
    }
}
