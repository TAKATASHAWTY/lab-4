#include <iostream>
#include "MyStringMeth.h"
#include "OwnStrLenOne.h"
#include "OwnStrLenTwo.h"
#include "OwnStrLenThree.h"
#include "OwnStrCpy.h"
#include "OwnStrCmp.h"
#include "OwnStrCat.h"
#include "DynamicMemory.h"
using namespace std;

void main(void)
{
	setlocale(0, "ru");

	myStr();

	cout << "============================================================================" << endl;

	char strExample[] = "������ ������, ��� ����������� �����.";

	cout << "������ ������ ����������� ����� ����������� ����� ������ - " << ownStrLenOne(strExample) << " ���� � ������." << endl;

	cout << "������ ������ ����������� ����� ����������� ����� ������ - " << ownStrLenTwo(strExample) << " ���� � ������." << endl;

	cout << "������ ������ ����������� ����� ����������� ����� ������ - " << ownStrLenThree(strExample) << " ���� � ������." << endl;

	char copy[50] = "";
	ownStrCpy(copy, strExample);

	cout << "\n������ ����������� ����� ����������� �����, ����������� �������: " << copy << endl;

	cout << "\n������ ����������� ����� ��������� �����, ������������ ������:\n" << strExample << "\n" << copy << endl;
	if (ownStrCmp(copy, strExample))
	{
		cout << "��� ������ ���������." << endl;
	}
	else
	{
		cout << "��� ������ �����������." << endl;
	}

	char firstHalf[100] = "������ ����������� ����� ";
	char secondHalf[] = "������������ �����!";

	ownStrCat(firstHalf, secondHalf);
	cout << "\n" << firstHalf << endl;

	cout << "============================================================================" << endl;

	dynamicMemory();

	cout << "============================================================================" << endl;
}