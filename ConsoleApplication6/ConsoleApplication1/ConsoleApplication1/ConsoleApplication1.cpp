#include <iostream>
#include <Math.h>
using namespace std;
float squ() {
    float a;
       float b;
    cout << "Введите числа:" << endl;
    cin >> a;
    cin >> b;

   float x = a * b;
   return x;
    
}
int main()
{
    setlocale(LC_ALL, "Russian");
    float c = squ();
    cout << "Площадь прямоугольника:"<< c << endl;
}