#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <Windows.h>

#include"Header.h"

using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int N;
	printf("������� �������\n");
	cin >> N;
	cin.get();

	if (N == 1)
	{

		/*1.��������� ���������, ������� ����������� �������� ������ � ������� ��� ������,
		� ����� ������� ���������: "�������� ... � ����� ������ ..." (�� ����� ���������� ������ ���� ��������
		��������������� ��������)*/

		char avtor[20] = "�������� ";
		char nazvanie[20] = "�������� ������ ";

		printf("��������:");
		gets_s(avtor);

		printf("�����:");
		gets_s(nazvanie);

		printf("�������� - %s, ��������: %s\n", avtor, nazvanie);

	}


	else if (N == 2)
	{
		/*2.���� �������� ���� �����. ��������� ��� �������� ���������� ��������� s1 � s2, ����� ���� ��������
		s2 ��������� �������� t1, �������� s1 � �������� t2.*/

		char s1[10];
		char s2[10];
		printf("Vvedite s1: \n");
		gets_s(s1);
		printf("Vvedite s2: \n");
		gets_s(s2);
		char t1[10], t2[10];

		strcpy_s(t1, s1);
		printf("strana1 %s - ravna %s: \n", t1, s1);

		strcpy_s(t2, s2);
		printf("strana2 %s - ravna %s: \n", t2, s2);
	}


	else if (N == 3)
	{
		/*3.���� �����. ������� �� ����� ��� ��������� ������.*/

		char slovo[] = "ololo";
		printf("last simbol is: %c\n", slovo[strlen(slovo) - 1]);
	}

	else if (N == 4)
	{
		/*5.���� �����. ����������, ��������� �� ������ � ��������� ������� � ���.*/
		char slovo[10] = "gogomoga";
		printf("Clovo: %s\n", slovo);

		if (slovo[1] == slovo[3])
		{
			printf("Odinakovy: %c\n", slovo[1]);
		}
		else printf("Ne odinakovy\n");

	}

	else if (N == 5)
	{
		/*7.���� �����. �������� � ������� �� ����� ��������������, ��������� �� ��� ������� � ���������� �������*/
		char slovo[10] = "gogamoga";
		printf("poluchilos: %c%c\n", slovo[1], slovo[3]);
	}

	else if (N == 6)
	{
		/*10.���� �����, ��������� �� ������� ����� ����. ������� �� ����� ��� ������ ��������, ��
		��������� �������� �����.*/
		char slovo[] = "gogamoga";
		int mid = (strlen(slovo) / 2);
		slovo[mid] = '\0';
		printf("1st part - %s\n", slovo);
	}

	else if (N == 7)
	{
		/*11.������� ������ �������� �� 10 ���������. �������� �������-����� �� ������ '*'.*/
		char simbols[] = "����� �����: 4556 7885 4444 9898";
		int c = 0;
		for (int i = 0; i < strlen(simbols); i++)
		{
			if (simbols[i] = ' ')
				c++;

			if (c == 3 || c == 4)
				if ((int)simbols[i] >= 48 && (int)simbols[i] <= 57)
				{
					simbols[i] = '*';
				}
		}
		printf("string: %s\n", simbols);
	}


	else if (N == 8)
	{
		/*12.������� ������ �������� �� 11 ���������. ���������� ��� �������� �����-������� � ������� �������*/
		/*for (int i = 0; i < 256; i++)
		{
			printf("%d - %c\n", i, i);
		}*/
		char a[] = "����";
		for (int i = 0; i < strlen(a); i++)
		{
			//printf("%d - %c\n", ((int)a[i])-32, ((int)a[i]) - 32);
			
			*(a + i) = ((int)*(a + i)) - 32;
		}
		printf("%s\n", a);
	}
	


		system("pause");
}