//Cocktail sort
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int digitals[5]; // объ€вили массив на 5 €чеек
    cout << "Enter 5 numbers to fill the array: (Cocktail sort) " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> digitals[i]; // заполн€ем массив
    }
    bool sort_or_not = true; // мен€ли ли €чейки своЄ значение
    int right = n - 1; // n - размер массива, right - права€ граница массива
    int left = 1; // left - начало массива (лева€ граница)
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
        cout << digitals[i] << " "; // выводим элементы массива
    }
    return 0;
}