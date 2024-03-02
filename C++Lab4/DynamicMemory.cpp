#include "DynamicMemory.h"
#include "OwnStrCat.h"
#include "OwnStrLenOne.h"
#include "OwnStrLenTwo.h"
using namespace std;

void dynamicMemory(void)
{
	int n = 50;

	char *str1 = (char*)calloc(n, sizeof(char));// ������� malloc ������ �������� ���� ������ ��������� �������, �� ������������� ��� ���������� �� ���������.
	char *str2 = (char*)calloc(n, sizeof(char));// ������� calloc, � ���� �������, �������� ���� ������ � �������������� ��� �������� ����������.

	if (str1 == NULL)
	{
		printf("������ ��� str1 �� ��������!");
		return;
	}
	if (str2 == NULL)
	{
		printf("������ ��� str2 �� ��������!");
		return;
	}

	char sent1[] = "������������� ������������ ������";

	for (int i = 0; sent1[i] != NULL; i++)
	{
		str1[i] = sent1[i];
	}

	char sent2[] = ", ����������� � ������������� �������� � ���.";

	for (int i = 0; sent2[i] != NULL; i++)
	{
		str2[i] = sent2[i];
	}

	cout << str1 << str2 << endl;

	cout << "����� ������ ���� ����� " << ownStrLenOne(str1) + ownStrLenTwo(str2) <<" ����." << endl;

	free(str1);
	free(str2);
}
