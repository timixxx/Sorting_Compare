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
	cout << " �������� ������ ����� �����" << endl;
	InterfaceLine();
	cout << "|     ������� 1 - ���     |           ������� 2 - ���           |       ������� 3 - ���       |\n";
	cout << "|      ����� �������      |     �������� ���������� �������     |     ���������� �� �����     |\n";
	InterfaceLine();
	cout << endl;
}

void InterfaceHeaderMiddle()
{
	InterfaceLine();
	cout << " �������� ������ ����������" << endl;
	InterfaceLine();
	cout << "|       ������� 1 - ���        |           ������� 2 - ���        |\n";
	cout << "|     ���������� ���������     |     ������������� ����������     |\n";
	InterfaceLine();
	cout << endl;
}

void InterfaceHand()
{
	InterfaceLine();
	cout << " ������� ������ ������� (�����): " << endl;
	InterfaceLine();
	cout << endl;
}

void InterfaceEnd(double duration, string typesort)
{
	InterfaceLine();
	cout << "|     ��� ���������� -     |     ����� ���������� -\n";
	cout << "| " << typesort << " |" << "     " << duration << " ���\n";
	InterfaceLine();
}

void InterfaceTransit()
{
	InterfaceLine();
	cout << "|         ������� 1 - ���          |             ������� 2 - ���             |\n";
	cout << "|     ������ ������� � �������     |     ������ ������� � ��������� ����     |\n";
	InterfaceLine();
}