#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include <algorithm>

/*
komentarz
*/

using namespace std;

void ustaw(char *tablica2[2]) {
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			tablica2[j][i] = 'p';
		}
	}
}

/*tak sobie piszę*/

bool tura_gracza(int ile_razy) {
	if (ile_razy % 2 == 0) {
		return true;
	}
	else
	{
		return false;
	}
}

void rysuj(char *tab[2])
{
	for (int i = 0; i < 5; ++i)
	{
		cout << "@";
	}
	cout << endl;
	for (int i = 0; i < 3; ++i)
	{
		cout << "@";
		for (int j = 0; j < 3; ++j)
		{
			if (tab[j][i] == 'p')
			{
				cout << " ";
			}
			else if (tab[j][i] == 'O')
			{
				cout << "O";
			}
			else
			{
				cout << "X";
			}
		}
		cout << "@" << endl;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << "@";
	}
	cout << endl;
}

int main()
{
	char* tablica[2];
	for (int i = 0; i < 3; ++i)
	{
		tablica[i] = new char['p'];
	}

	ustaw(tablica);

	int ile = 1, x = 0, y = 0;
	while (true)
	{
		if (tablica[0][0] == 'X' && tablica[0][1] == 'X' && tablica[0][2] == 'X')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[1][0] == 'X' && tablica[1][1] == 'X' && tablica[1][2] == 'X')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[2][0] == 'X' && tablica[2][1] == 'X' && tablica[2][2] == 'X')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[0][0] == 'X' && tablica[1][0] == 'X' && tablica[2][0] == 'X') 
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[0][1] == 'X' && tablica[1][1] == 'X' && tablica[2][1] == 'X') 
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[0][2] == 'X' && tablica[1][2] == 'X' && tablica[2][2] == 'X')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[0][2] == 'X' && tablica[1][1] == 'X' && tablica[2][0] == 'X')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[0][0] == 'X' && tablica[1][1] == 'X' && tablica[2][2] == 'X')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}

		else if (tablica[0][0] == 'O' && tablica[0][1] == 'O' && tablica[0][2] == 'O')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[1][0] == 'O' && tablica[1][1] == 'O' && tablica[1][2] == 'O')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[2][0] == 'O' && tablica[2][1] == 'O' && tablica[2][2] == 'O')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[0][0] == 'O' && tablica[1][0] == 'O' && tablica[2][0] == 'O')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[0][1] == 'O' && tablica[1][1] == 'O' && tablica[2][1] == 'O')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[0][2] == 'O' && tablica[1][2] == 'O' && tablica[2][2] == 'O')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[0][2] == 'O' && tablica[1][1] == 'O' && tablica[2][0] == 'O')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}
		else if (tablica[0][0] == 'O' && tablica[1][1] == 'O' && tablica[2][2] == 'O')
		{
			cout << "Zwtciezyl krzyzyk!" << endl;
			break;
		}

		rysuj(tablica);
		if (tura_gracza(ile) == true)
		{
			cout<<endl<<endl;
			cout << "Tura gracza: X" << endl;
			cout << "Podaj pozycje x: ";
			cin >> x;
			cout << endl << "Podaj pozycje y: ";
			cin >> y;

			if (tablica[x][y] == 'X' || tablica[x][y] == 'O')
			{
				while (true)
				{
					cout << "Pozycja jest zajêta podaj now¹: " << endl;
					cout << "Poz x: ";
					cin >> x;
					cout << endl << "Poz y: ";
					cin >> y;

					if (tablica[x][y]=='p')
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}

			tablica[x][y] = 'X';
		}
		else if (tura_gracza(ile) == false)
		{
			cout << endl;
			cout << "Tura gracza: O" << endl;
			cout << "Podaj pozycje x: ";
			cin >> x;
			cout << endl << "Podaj pozycje y: ";
			cin >> y;

			if (tablica[x][y] == 'X' || tablica[x][y] == 'O')
			{
				while (true)
				{
					cout << "Pozycja jest zajêta podaj now¹: " << endl;
					cout << "Poz x: ";
					cin >> x;
					cout << endl << "Poz y: ";
					cin >> y;

					if (tablica[x][y] == 'p')
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}

			tablica[x][y] = 'O';
		}
		ile++;
		system("cls");
	}

	cin.get();

	return 0;
}