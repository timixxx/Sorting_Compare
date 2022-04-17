#include <iostream>
#include <string>
#include <fstream>
#include "Interface.h"
using namespace std;

int* HandedInput(int sizemas)
{
    int* mas = new int[sizemas];
    for (int i = 0; i < sizemas; i++) {
        cout << "mas[" << i << "] = ";
        cin >> mas[i];
    }
    return mas;
}

int* RandInput(int sizemas)
{
    int* mas = new int[sizemas];
    for (size_t i = 0; i < sizemas; i++)
        mas[i] = rand() % 1000;
    return mas;
}

void masPrint(int* mas, int sizemas)
{
    for (int i = 0; i < sizemas; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
}

void Output(int* mas, int sizemas, string typesort, double duration)
{
    ofstream fout("Output.txt");
    fout << "Тип сортировки - " << typesort << " Время сортировки - " << duration << endl;
        for (int i = 0; i < sizemas; i++) {
            fout << mas[i] << " ";
        }
        fout.close();
        cout << "Отсортированный массив успешно записан в файл Output.txt" << endl;
}

int FileMasLength(string file)   //считаем количество чисел в данном массиве
{
    ifstream fin1(file);
    int sizecount = 0;
    string buff;
    if (fin1.is_open())
    {
        while (!fin1.eof())
        {
            fin1 >> buff;
            sizecount++;
        }
    }
    fin1.close();
    return sizecount;
}

int* GetFileMas(string file)
{

    int sizemas = FileMasLength(file);

    int* MasFromFile = new int[sizemas];
    ifstream fin(file);
    int i = 0;
    string buffer;
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            fin >> buffer;
            MasFromFile[i] = atoi(buffer.c_str()); //конвертируем string в int 
            i++;
        }
    }
    fin.close();
    return MasFromFile;
}

