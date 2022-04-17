#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Interface.h"
using namespace std;

int* BubbleSort(int * mas, int sizemas)
{
    int temp;
    for (int i = 0; i < sizemas - 1; i++)
        for (int j = 0; j < sizemas - i - 1; j++)
            if (mas[j] > mas[j + 1]) 
            {
                temp = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = temp;
            }
    return mas;
}


void siftDown(int* mas, int root, int bottom) // ѕросеивание через кучу
{
    int DescendMax; 
    int done = 0; 
 
    while ((root * 2 <= bottom) && (!done))    // пока не последний р€д
    {
        if (root * 2 == bottom)    // если дошли до последнего р€да, наибольший потомок = левый потомок
           DescendMax = root * 2;  
        
        else if (mas[root * 2] > mas[root * 2 + 1])  // иначе запоминаем больший потомок из двух 
            DescendMax = root * 2;
        else
            DescendMax = root * 2 + 1;
       
        if (mas[root] < mas[DescendMax])   // если вершина меньше наибольшего потомка, мен€ем местами
        {
            int temp = mas[root]; 
            mas[root] = mas[DescendMax];
            mas[DescendMax] = temp;
            root = DescendMax;
        }
        else 
            done = 1;                    // пирамида сформирована
    }
}

void heapSort(int* mas, int sizemas)
{

    for (int i = (sizemas / 2); i >= 0; i--) //создаем нижний р€д пирамиды
        siftDown(mas, i, sizemas - 1);
    
    for (int i = sizemas - 1; i >= 1; i--) // ѕросеиваем через пирамиду остальные элементы
    {
        int temp = mas[0];
        mas[0] = mas[i];
        mas[i] = temp;
        siftDown(mas, 0, i - 1);
    }
}
