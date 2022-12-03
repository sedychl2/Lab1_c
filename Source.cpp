// Bubble Sort
#include <iostream>
using namespace std;
int main() {
    int digitals[5]; // объ€вили массив на 5 €чеек
    cout << "Enter 5 numbers to fill the array: (Bubble sort) " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> digitals[i]; // заполн€ем массив
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (digitals[j] > digitals[j + 1]) {
                int b = digitals[j]; // создали дополнительную переменную
                digitals[j] = digitals[j + 1]; // мен€ем элементы местами по условию
                digitals[j + 1] = b; // записываем значени€ элементов
            }
        }
    }
    cout << "Array in sorted form: ";
    for (int i = 0; i < 5; i++) {
        cout << digitals[i] << " "; // выводим элементы массива
    }
}
