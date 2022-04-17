#include <iostream>
#include <string>
#include "Interface.h"
#include "Sorts.h"
#include "Input.h"
#include "SortingProgram.h"
#include <ctime>
using namespace std;

void MainProgram()
{
	while (true) {
		int OperationNum;
		clock_t start;
		string typesort;
		string filename;
		string answer;
			double duration;
		int sizemas = 0;
		int* masAft = new int;
		int* masBfr = new int;

		setlocale(LC_ALL, "rus");
		system("cls");
		system("color E0");

		InterfaceHeaderStart();
		cin >> OperationNum;
		if (OperationNum == 1)
		{
			system("cls");
			InterfaceHand();
			while (true) {
				cin >> sizemas;
				if (sizemas > 0)
					break;
				else
					cout << "Размер массива не может быть меньше 0! " << endl;
			}
			masBfr = new int[sizemas];
			masBfr = HandedInput(sizemas);
		}
		else if (OperationNum == 2)
		{
			system("cls");
			InterfaceHand();
			while (true) {
				cin >> sizemas;
				if (sizemas > 0)
					break;
				else
					cout << "Размер массива не может быть меньше 0! " << endl;
			}
			masBfr = new int[sizemas];
			masBfr = RandInput(sizemas);
		}
		else if (OperationNum == 3)
		{
			cout << "Введите имя файла в формате название.txt:" << endl;
			cin >> filename;
			sizemas = FileMasLength(filename);
			masBfr = GetFileMas(filename);
		}
		OperationNum = 0;

		cout << "Исходный массив: " << endl;
		masPrint(masBfr, sizemas);
		masAft = masBfr;

		InterfaceHeaderMiddle();
		cin >> OperationNum;

		if (OperationNum == 1)
		{
			start = clock();
			BubbleSort(masAft, sizemas);
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			typesort = "    сортировка Пузырьком";
		}
		else if (OperationNum == 2)
		{
			start = clock();
			heapSort(masAft, sizemas);
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			typesort = "Пирамидальная сортировка";
		}
		else
			cout << "неверное значение" << endl;

		system("cls");
		OperationNum = 0;
		InterfaceTransit();
		cin >> OperationNum;

		if (OperationNum == 1)
		{
			system("cls");
			InterfaceEnd(duration, typesort);
			cout << "Отсортированный массив: " << endl;
			masPrint(masAft, sizemas);
		}
		else if (OperationNum == 2)
		{
			Output(masAft, sizemas, typesort, duration);
		}
		cout << "Введите exit для выхода из программы или любой символ для повторного запуска: " << endl;
		cin >> answer;
		if (answer == "exit") {
			break;
		}
	}
}
int main()
{
	MainProgram();
	return 0;
}