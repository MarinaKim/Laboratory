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
	cout << "С КАКОГО ЯЗЫКА ПРОГРАММИРОВАНИЯ НАЧАТЬ?" << endl;

	cout << "Зачем вы хотите изучать программирование?:" << endl;
	cout << "1. Я не знаю, выберете за меня." << endl;
	cout << "2. Поразвлечься" << endl;
	cout << "3. Интересно." << endl;
	cout << "4. Саморазвитие." << endl;
	cout << "5. Заработать." << endl;
	cout << "6. Для детей." << endl;
	cin >> i;

	if (i == 1)
	{
		cout << "PYTHON" << endl;
	}
	else if ((i == 2) || (i == 3) || (i == 4))
	{
		cout << "Уже есть идея на 1 000 000? y/n";
		cin >> u;
		if (u == 'y')
			
		{
		start:
			cout << "Какая платформа/сфера?" << endl;
			cout << "1.WEB" << endl;
			cout << "2.Корп. софт" << endl;
			cout << "3.Мобильная" << endl;
			cout << "4. 3D игры" << endl;
			cin >> j;
			switch (j)
			{
			case 1: {
				cout << "Ваш сервис будет работать в реальном времени, как twitter? y/n";
					cin >> u;
					if (u == 'y')
					{
						cout << "JAVASCRIPT" << endl;
					}
					else
					{
						start1:
						cout << "Хотите попробовать что-то новое, но не трудоемкое?"<<endl;
						cout << "1.да" << endl;
						cout << "2.нет" << endl;
						cout << "3. не знаю" << endl;
						cin >> j;
						if (j==1)
						{
							cout << "JAVASCRIPT" << endl;
						}
						else if ((j == 2) || (j == 3))
						{
							cout << "Какая у вас любимая игрушка?" << endl;
							cout << "1. LEGO" << endl;
							cout << "2. Пластилин" << endl;
							cout << "3. Старенький , но любимый мишка" << endl;
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
				cout << "Что скажете о Microsoft?" << endl;
				cout << "1.люблю его" << endl;
				cout << "2. не плохо" << endl;
				cout << "3. фуууу..." << endl;
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
				cout << "Какая OS: " << endl;
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
			
			cout << "Мне нравиться учиться:" << endl;
			cout << "1.простым способом" << endl;
			cout << "2.Лучшим способом" << endl;
			cout << "3.Трудненьким способом" << endl;
			cout << "4. Очень сложный путь, но потом будет легче." << endl;
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
				cout << "Какая коробка передач? " << endl;
				cout << "a. автомат" << endl;
				cout << "b. ручная" << endl;
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
		cout << "У меня есть идея для стартапа. Y/N" << endl;
		cin >> u;
		if (u == 'y')
		{
			goto start;
		}
		else
		{
			cout << "какая платформа/сфера?" << endl;
			cout << "1. Я хочу работать в крупной IT-компании." << endl;
			cout << "2. Я просто хочу $$$." << endl;
			cout << "3. WEB" << endl;
			cout << "4. Корп. софт." << endl;
			cout << "5. Мобильная" << endl;
			cout << "6. 3D игры" <<endl;
			cin >> j;
			switch (j)
			{
			case 1: {
				cout << "какая компания?" << endl;
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
				cout << "1. Фронтенд (web-интерфейс)" << endl;
				cout << "2.Бэкенд (то, что за web-сайтом)" << endl;
				cin >> j;
				if (j == 1)
					cout << "JAVASCRIPT" << endl;
				else
					cout << "Хочу работать на:" << endl;
				cout << "1. стартап" << endl;
				cout << "2.корпорацию" << endl;
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
		cout << "Начните со scratch, затем PYTHON" << endl;
	}
}