#include "MyStringMeth.h"
#include <Windows.h>
using namespace std;

void myStr(void)
{
	cout << "������ �������:\n����� ����� ���������� � ���� ���� <<�>> � ������������� ����� ������� <<�>>?\n(����� ������ � ������� �����)" << endl;
	char answer[14];
	char check[] = "�������������";

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	do 
	{
		cin >> answer;
	} while (strcmp(check, answer) != 0);

	char str[50] = "���������� ����� - ";
	char sign[4] = "!";

	strcat(str, answer);

	strcpy(sign, "!!!");
	
	strcat(str, sign);

	cout << str << " \n����� ������ ������: " << strlen(str) << " ����." << endl;
}
