//Cocktail sort
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int digitals[5]; // �������� ������ �� 5 �����
    cout << "Enter 5 numbers to fill the array: (Cocktail sort) " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> digitals[i]; // ��������� ������
    }
    bool sort_or_not = true; // ������ �� ������ ��� ��������
    int right = n - 1; // n - ������ �������, right - ������ ������� �������
    int left = 1; // left - ������ ������� (����� �������)
    do {
        bool sort_or_not = true;
        for (int i = left; i <= right; i++) {
            if (digitals[i - 1] > digitals[i]) {
                swap(digitals[i - 1], digitals[i]);
                sort_or_not = false;
            }
        }
        right--;
        for (int i = right; i >= left; i--) {
            if (digitals[i] < digitals[i - 1]) {
                swap(digitals[i], digitals[i - 1]);
                sort_or_not = false;
            }
        }
        left++;
    } while (sort_or_not == false);
    cout << "Array in sorted form: ";
    for (int i = 0; i < 5; i++) {
        cout << digitals[i] << " "; // ������� �������� �������
    }
    return 0;
}