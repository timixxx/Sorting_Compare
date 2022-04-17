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


void siftDown(int* mas, int root, int bottom) // ����������� ����� ����
{
    int DescendMax; 
    int done = 0; 
 
    while ((root * 2 <= bottom) && (!done))    // ���� �� ��������� ���
    {
        if (root * 2 == bottom)    // ���� ����� �� ���������� ����, ���������� ������� = ����� �������
           DescendMax = root * 2;  
        
        else if (mas[root * 2] > mas[root * 2 + 1])  // ����� ���������� ������� ������� �� ���� 
            DescendMax = root * 2;
        else
            DescendMax = root * 2 + 1;
       
        if (mas[root] < mas[DescendMax])   // ���� ������� ������ ����������� �������, ������ �������
        {
            int temp = mas[root]; 
            mas[root] = mas[DescendMax];
            mas[DescendMax] = temp;
            root = DescendMax;
        }
        else 
            done = 1;                    // �������� ������������
    }
}

void heapSort(int* mas, int sizemas)
{

    for (int i = (sizemas / 2); i >= 0; i--) //������� ������ ��� ��������
        siftDown(mas, i, sizemas - 1);
    
    for (int i = sizemas - 1; i >= 1; i--) // ���������� ����� �������� ��������� ��������
    {
        int temp = mas[0];
        mas[0] = mas[i];
        mas[i] = temp;
        siftDown(mas, 0, i - 1);
    }
}
