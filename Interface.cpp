#include <iostream>
#include <string>
#include <iomanip>
#include "Interface.h"
using namespace std;

void InterfaceLine() 
{
	for (int i = 1; i <= 120; i++) {
		cout << "-";
	}
}

void InterfaceHeaderStart() 
{
	InterfaceLine();
	cout << " Выберите способ ввода файла" << endl;
	InterfaceLine();
	cout << "|     Введите 1 - для     |           Введите 2 - для           |       Введите 3 - для       |\n";
	cout << "|      ввода вручную      |     создания случайного массива     |     считывания из файла     |\n";
	InterfaceLine();
	cout << endl;
}

void InterfaceHeaderMiddle()
{
	InterfaceLine();
	cout << " Выберите способ сортировки" << endl;
	InterfaceLine();
	cout << "|       Введите 1 - для        |           Введите 2 - для        |\n";
	cout << "|     сортировки Пузырьком     |     Пирамидальной сортировки     |\n";
	InterfaceLine();
	cout << endl;
}

void InterfaceHand()
{
	InterfaceLine();
	cout << " Введите размер массива (число): " << endl;
	InterfaceLine();
	cout << endl;
}

void InterfaceEnd(double duration, string typesort)
{
	InterfaceLine();
	cout << "|     Тип сортировки -     |     Время сортировки -\n";
	cout << "| " << typesort << " |" << "     " << duration << " сек\n";
	InterfaceLine();
}

void InterfaceTransit()
{
	InterfaceLine();
	cout << "|         Введите 1 - для          |             Введите 2 - для             |\n";
	cout << "|     вывода массива в консоль     |     вывода массива в текстовый файл     |\n";
	InterfaceLine();
}