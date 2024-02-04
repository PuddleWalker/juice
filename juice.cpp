#include<iostream>
#include "Manage.h"
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Приложение 'Телефонная книжка'";
	bool hoot = true;
	int choise = 0;
	int coun = 0;
	Manage hp;
	while (hoot) {
		int num = 0;
		int numb = 0;
		char* name = new char[255];

		cout << R"raw(
Выберите действие:
0 - Завершение программы
1 - Вывести все контакты
2 - Показать один контакт
3 - Создать контакт
4 - Удалить контакт
5 - Поиск
6 - Редактировать контакт
)raw"; cin >> choise;
		if ((coun > 0) or (coun == 0 and (choise < 2 or choise == 3))) {
			switch (choise) {
			case 0:
				hoot = false;
				break;
			case 1:
				hp.print_all();
				break;
			case 2:
				cout << "Введите номер контакта\n"; cin >> num;
				if (num > 0 and num <= coun) hp.show(num);
				else cout << "Операция невозможна, недостаточно контактов\n";
				break;
			case 3:
				cout << "Введите имя для контакта\n"; cin >> name;
				hp.create(name);
				coun++;
				break;
			case 4:
				cout << "Введите номер контакта\n"; cin >> num;
				if (num > 0 and num <= coun) hp.remove(num);
				else cout << "Операция невозможна, недостаточно контактов\n";
				coun--;
				break;
			case 5:
				cout << "Найти: "; cin >> name;
				hp.search(name);
				break;
			case 6:
				cout << "Введите номер контакта для редактирования\n"; cin >> num;
				if (num <= 0 or num > coun) {
					cout << "Операция невозможна, недостаточно контактов\n";
					break;
				}
				cout << R"raw(
Выберите действие:
1 - Имя
2 - Номер мобильного телефона
3 - Номер рабочего телефона
4 - Номер домашнего телефона
5 - Дополнительная информация
)raw"; cin >> numb;
				if (numb < 1 or numb > 5) {
					cout << "Неверное значение\n";
					break;
				}
				cout << "Введите информацию для редактирования\n"; cin >> name;
				hp.edit(num, numb, name);
				break;
			default:
				cout << "Неверное значение\n";
				break;
			}
		}
		else cout << "Операция невозможна, недостаточно контактов\n";
		system("pause");
		system("cls");
	}
}