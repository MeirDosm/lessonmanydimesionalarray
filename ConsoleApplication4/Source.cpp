#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <Windows.h>
using namespace std;

void main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	/*int i;
	int a[10];
	int b[10];
	int c[10];

	for (i = 0; i < 10; i++)
	{
		cout << "Vvedite 10 elementov 1 massiva: ";
		cin >> a[i];
	}
	for (i = 0; i < 10; i++)
	{
		cout << "Vvedite 10 elementov 2 massiva: ";
		cin >> b[i];
	}
	for (i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			c[i] = a[i + 1 ];
		}
		if (i % 2 != 0)
		{
			c[i] = b[i + 1];
		}
		cout << "Novyi massiv: " << c[i] << endl;
		
	}*/

	/*int i;
	int a[17];
	int S = 0;
	 
	for (i = 0; i < 17; i++)
	{
		cout << "Vvedite 17 celyh dvuznachnyh chisel: " << endl;
		cin >> a[i];
		S += a[i];
	}
	cout << "Summa chisel massiva ravna: " << S << endl;*/

	/*int i;
	float S2 = 0;
	float S3 = 0;
	float Sub = 0;
	float a[17] = { 3,11,18,21,10,23.3,3.5,10.8,4.5,3.3,11.1,11.5,11.6,1,0,10.5,9.3 };

	

	for (i = 0; i < 17; i++)
	{
		if (i % 2 == 0)
		{
			S2 += a[i];
		}
	}
	for (i = 0; i < 17; i++)
	{

		if (i % 3 == 0)
		{
			S3 += a[i];
		}
	}
		Sub = S3 - S2;
		cout << "Raznost ravna: " << Sub << endl;*/

	/*int i;
	int j;
	int count = 0;
	int a[12];

	

	for (i = 0; i < 12; i++)
	{
		cout << "Vvedite 12 elementov massiva: " << endl;
		cin >> a[i];
	}

	for (int i = 0; i < 12; i++)
	{
		for (int j = 11; j > 1; j--)
		{
			if (a[j - 1] > a[j])
			{
				int temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
				count++;
			}
		}
	}
	for (j = 0; j < 12; j++)
	{
		cout << "Novyi massiv: " << a[j] << endl;
	}
	cout << "Kolichestvo perestanovok ravno: " << count << endl;
*/
	
    /*int i;
	int S;
	int a[11];

	for (i = 0; i < 11; i++)
	{
		cout << "Vvedite 11 elementov massiva: ";
		cin >> a[i];
	}

	for (i = 0; i < 11; i++)
	{
		if (a[i] < 0 && a[i] % 2!= 0)
		{
			SetConsoleTextAttribute(hConsole, 12); 
			S += a[i];
		}
	}
	for (i = 0; i < 11; i++)
	{
		if (i % 3 == 0)
		{
			SetConsoleTextAttribute(hConsole, 14);
		}
	}
	for (i = 0; i < 11; i++)
	{
		cout << "Novyi massiv: " << a[i] << endl;
	}*/

    int x[10][10] = { {0},{0} };
	for (int i = 0; i < 10; i++)
	{
		x[10][10] = 1 + rand() % 20;
		cout << x[i][i];
	}

	int min = 0;
	for (int i = 0; i < 10; i++)
	{
		min = x[0][i];
		for (int j = 0; j < 10; j++)
		{
			if (x[j][i] < min)
			{
				min = x[j][i];
			}
		}

	}
}
