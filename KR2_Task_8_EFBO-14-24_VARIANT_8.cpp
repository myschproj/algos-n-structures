#include <iostream>
using namespace std;

int main() {
 int size;
 cout << "Введите размер массива: ";
 cin >> size;

 int array1;
 for (int i = 0; i < size; i++) {
 cout << "Введите число для элемента " << i << ": ";
 cin >> array1;
 }

 int array2;
 for (int i = 0; i < size; i++) {
 array2 = array1;
 cout << "Элемент " << i << ": " << array2 << endl;
 }

 return 0;
}
