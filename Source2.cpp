//Selection sort
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int digitals[5]; // объ€вили массив на 5 €чеек
    cout << "Enter 5 numbers to fill the array: (Selection sort) " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> digitals[i]; // заполн€ем массив
    }
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < n; i++) {            //находим элемент с наибольшим значением
        j = i;                               //и мен€ем с ним местами последний элемент
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
        cout << digitals[i] << " "; // выводим элементы массива
    }
    return 0;
}