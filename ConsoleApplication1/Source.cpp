#include <stdio.h>
#include<locale.h>
#include <iostream>
#include<stdint.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
char u;
int j;
void main()
{
	setlocale(LC_ALL, "Russian");

	int i;
	cout << "� ������ ����� ���������������� ������?" << endl;

	cout << "����� �� ������ ������� ����������������?:" << endl;
	cout << "1. � �� ����, �������� �� ����." << endl;
	cout << "2. ������������" << endl;
	cout << "3. ���������." << endl;
	cout << "4. ������������." << endl;
	cout << "5. ����������." << endl;
	cout << "6. ��� �����." << endl;
	cin >> i;

	if (i == 1)
	{
		cout << "PYTHON" << endl;
	}
	else if ((i == 2) || (i == 3) || (i == 4))
	{
		cout << "��� ���� ���� �� 1 000 000? y/n";
		cin >> u;
		if (u == 'y')
			
		{
		start:
			cout << "����� ���������/�����?" << endl;
			cout << "1.WEB" << endl;
			cout << "2.����. ����" << endl;
			cout << "3.���������" << endl;
			cout << "4. 3D ����" << endl;
			cin >> j;
			switch (j)
			{
			case 1: {
				cout << "��� ������ ����� �������� � �������� �������, ��� twitter? y/n";
					cin >> u;
					if (u == 'y')
					{
						cout << "JAVASCRIPT" << endl;
					}
					else
					{
						start1:
						cout << "������ ����������� ���-�� �����, �� �� ����������?"<<endl;
						cout << "1.��" << endl;
						cout << "2.���" << endl;
						cout << "3. �� ����" << endl;
						cin >> j;
						if (j==1)
						{
							cout << "JAVASCRIPT" << endl;
						}
						else if ((j == 2) || (j == 3))
						{
							cout << "����� � ��� ������� �������?" << endl;
							cout << "1. LEGO" << endl;
							cout << "2. ���������" << endl;
							cout << "3. ���������� , �� ������� �����" << endl;
							cin >> j;
							switch (j)
							{
							case 1: {
								cout << "PYTHON" << endl;
							}break;
							case 2: {
								cout << "RUBY" << endl;
							}break;
							case 3: {
								cout << "PHP" << endl;
							}break;
							}
						}

					}

			}break;
			case 2: {
				
				start2:
				cout << "��� ������� � Microsoft?" << endl;
				cout << "1.����� ���" << endl;
				cout << "2. �� �����" << endl;
				cout << "3. �����..." << endl;
				cin >> j;
				switch (j)
				{
				case 1:
				{
					cout << "C+" << endl;
				}break;
				case 2:
				{
					cout << "JAVA" << endl;
				}break;
				case 3:
				{
					cout << "JAVA" << endl;
				}break;
				}
			}break;
			case 3: {
				start3:
				cout << "����� OS: " << endl;
				cout << "1.IOS" << endl;
				cout << "2.Android" << endl;
				cin >> j;
				if (j == 1)
					cout << "C" << endl;
				else
					cout << "JAVA" << endl;
			}break;
			case 4: {
				start4:
				cout << "C++" << endl;
			}break;
			}
		}
		else
		{
			
			cout << "��� ��������� �������:" << endl;
			cout << "1.������� ��������" << endl;
			cout << "2.������ ��������" << endl;
			cout << "3.����������� ��������" << endl;
			cout << "4. ����� ������� ����, �� ����� ����� �����." << endl;
			cin >> j;
			switch (j) 
			{
			case 1: {
				cout << "PHYTON" << endl;
			}break;

			case 2: {
				cout << "PHYTON" << endl;
			}break;

			case 3: {
				cout << "����� ������� �������? " << endl;
				cout << "a. �������" << endl;
				cout << "b. ������" << endl;
				cin >> u;
				if (u == 'a')
				{
					cout << "JAVA" << endl;
				}
				else
				{
					cout << "C" << endl;
				}
			}break;

			case 4: {
				cout << "C++" << endl;
			}break;
			}
		}
	}
	else if (i == 5)
	{
		cout << "� ���� ���� ���� ��� ��������. Y/N" << endl;
		cin >> u;
		if (u == 'y')
		{
			goto start;
		}
		else
		{
			cout << "����� ���������/�����?" << endl;
			cout << "1. � ���� �������� � ������� IT-��������." << endl;
			cout << "2. � ������ ���� $$$." << endl;
			cout << "3. WEB" << endl;
			cout << "4. ����. ����." << endl;
			cout << "5. ���������" << endl;
			cout << "6. 3D ����" <<endl;
			cin >> j;
			switch (j)
			{
			case 1: {
				cout << "����� ��������?" << endl;
				cout << "1. facebook" << endl;
				cout << "2. Google" << endl;
				cout << "3. Aple" << endl;
				cout << "4. Windows" << endl;
				cin >>j;
				switch (j)
				{
				case 1: cout << "PYTHON" << endl;
				case 2: cout << "PYTHON" << endl;
				case 3: cout << "C" << endl;
				case 4: cout << "C#" << endl;
				}
			} break;
			case 2: {
				cout << "JAVA" << endl;
			}break;
			case 3: {
				cout << "1. �������� (web-���������)" << endl;
				cout << "2.������ (��, ��� �� web-������)" << endl;
				cin >> j;
				if (j == 1)
					cout << "JAVASCRIPT" << endl;
				else
					cout << "���� �������� ��:" << endl;
				cout << "1. �������" << endl;
				cout << "2.����������" << endl;
				cin >> j;
				switch (j)
				{
				case 1: {
					goto start1;
				}break;
				case 2: {
					goto start2;
				}break;
				}
			}break;
			case 4: {
				goto start2;
			}break;
			case 5: {
				goto start3;
			}break;
			case 6: {
				goto start4;
			}break;
			}
		}
	}
	else if (i == 6)
	{
		cout << "������� �� scratch, ����� PYTHON" << endl;
	}
}