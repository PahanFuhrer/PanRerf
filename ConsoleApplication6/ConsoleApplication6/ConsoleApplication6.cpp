#include <iostream>
#include "stdlib.h"
#include "locale"
#include <Windows.h>
#include "SHA.h"
void main()
{
    setlocale(LC_ALL, "Russian");
    int kol = 10;
    float sr1, sr2, y;
    float* B = new float[kol + 1];
    srand(time(NULL));
    Input_array(B, kol);
    Out_array(B, kol);
    sr1 = Srednee(B, kol, 0, kol / 2 - 1);
    sr2 = Srednee(B, kol, kol / 2, kol - 1);
    printf("\n Среднее значение 1 пол. массива:");
    printf("\n sr1=%5.2f", sr1);
    printf("\n Среднее значение 2 пол. массива:");
    printf("\n sr2=%5.2f", sr2);
    y = sr1 + sr2;
    printf("Сумму средних значений вставим на предпоследнее место в массиве: \n");
    Vstavka(B, kol, y, kol - 1);
    Out_array(B, kol);
    system("pause");

}

