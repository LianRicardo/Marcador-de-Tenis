// MarcadorTennis.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <time.h>
using namespace std;

void update(int seta, int setb, int gamea, int gameb, int scorea, int scoreb)
{
	cout << "sets ganados de a =\t" << seta << "\n";
	cout << "juegos ganados de a =\t" << gamea << "\n";
	cout << "puntos ganados de a =\t" << scorea << "\n";
	cout << "sets ganados de b =\t" << setb << "\n";
	cout << "juegos ganados de b =\t" << gameb << "\n";
	cout << "puntos ganados de b =\t" << scoreb << "\n";
}

int main()
{
	int co = 0;
	int coun = 0;
	int scorea = 0;
	int scoreb = 0;
	int gamea = 0;
	int gameb = 0;
	int seta = 0;
	int setb = 0;
	srand(time(NULL));
	bool win = false;
	bool ahit = false;
	bool bhit = false;
	string comentary1 = "Que emocionante partido señores";
	string comentary0 = "Comienza el partido jugador A contra jugador B esto parece ser un partido historico";
	string comentary2 = "El jugador A acaba de acer algo inesperado señores";
	string comentary3 = "El jugador B Hace un Increible SMASH";
	string comentary4 = "Este partido se esta tornando en algo exitante";
	string comentary5 = "EL jugador A acaba de acer un saque twist !!!";
	string comentary6 = "El jugador B a hecho algo inpensable un higuma otoshi";
	string comentary7 = "este juego parece que no tiene final";
	cout << comentary0 << "\n";
	update(seta, setb, gamea, gameb, scorea, scoreb);
	while (!win)
	{
		int r = rand() % 1 + 5;
		int w = rand() % 1 + 3;
		if (_kbhit())
		{
			switch (_getch())
			{
			case 'a':
				ahit = true;
				if (bhit)
				{
					switch (r)
					{
					case 1: 
						cout << comentary1 << "\n";
						break;
					case 2: 
						cout << comentary2 << "\n";
						break;
					case 3: 
						cout << comentary4 << "\n";
						break;
					case 4:
						cout << comentary5 << "\n";
						break;
					case 5:
						cout << comentary7 << "\n";
						break;
					default: 
						cout<<"esta bien chido el enfrentamiento de veras\n";
						break;
					}
				}
				else
				{
					coun += 1;
					switch (coun)
					{
					case 1:
						scorea = 15;
						system("cls");
						update(seta, setb, gamea, gameb, scorea, scoreb);
						break;
					case 2:
						scorea = 30;
						system("cls");
						update(seta, setb, gamea, gameb, scorea, scoreb);
						break;
					case 3:
						scorea = 40;
						system("cls");
						update(seta, setb, gamea, gameb, scorea, scoreb);
						break;
					case 4:
						break;
					default:
						break;
					}
					if (coun == 4)
					{
						coun = 0;
						gamea++;
						system("cls");
						update(seta, setb, gamea, gameb, scorea, scoreb);
					}
					if (gamea == 6)
					{
						seta = 1;
						scorea = 0;
						system("cls");
						update(seta, setb, gamea, gameb, scorea, scoreb);
						win = true;
					}
				}
				bhit = false;
				break;
			case 'b':
				bhit = true;
				if (ahit)
				{
					switch (w)
					{
					case 1:
						cout << comentary1 << "\n";
						break;
					case 2:
						cout << comentary3 << "\n";
						break;
					case 3:
						cout << comentary6 << "\n";
						break;
					default:
						break;
					}
				}
				else
				{
					co += 1;
					switch (co)
					{
					case 1:
						scoreb = 15;
						system("cls");
						update(seta, setb, gamea, gameb, scorea, scoreb);
						break;
					case 2:
						scoreb = 30;
						system("cls");
						update(seta, setb, gamea, gameb, scorea, scoreb);
						break;
					case 3:
						system("cls");
						scoreb = 40;
						update(seta, setb, gamea, gameb, scorea, scoreb);
						break;
					case 4:
						break;
					default:
						break;
					}
					if (co == 4)
					{
						co = 0;
						gameb++;
						system("cls");
						update(seta, setb, gamea, gameb, scorea, scoreb);
					}
					if (gameb == 6)
					{
						setb = 1;
						scoreb = 0;
						system("cls");
						update(seta, setb, gamea, gameb, scorea, scoreb);
						win = true;
					}
				}
				ahit = false;
				break;
			default:
				break;
			}
		}
	}
	system("cls");
	update(seta, setb, gamea, gameb, scorea, scoreb);
	if (seta == 1)
	{
		cout << "EL JUGADOR A ES EL GRAN GANADOR DE WIMBLEDON\n";
	}
	else if (setb == 1)
	{
		cout << "EL JUGADOR B ES EL GRAN GANADOR DE WIMBLEDON\n";
	}

	return 0;
}
	

