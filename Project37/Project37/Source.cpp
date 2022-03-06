#include <iostream>
#include "room.h"
#include "tenant.h"
#include <conio.h>


using namespace std;
void setcol(unsigned int a)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, a);
}
void main()
{
	int n,N; //number of rooms
	cout << "Room's number: ";
	srand(time(NULL));
	n = rand() % 5 + 25;
	N=n;
	system("cls");
	room* x = new room[n];
	tenant* y = new tenant[N+10];
	x->rooms_creating(x, n);
	y->tenant_creating(y, N+10);
	int b = 0;
	char button = 'i';
	while (button != 'e')
	{
		cout << endl <<
			" 1)Find rooms for 1 tenant" << endl << " 2)Find rooms for 2 tenants" 
			<< endl << " 3)Find rooms for 3 tenants" << endl <<
			" 4)Show all free rooms with sport package" << endl <<
			" 5)Show all free rooms without sport package" 	<< 
			endl << " 6)Show cheapest room" << endl << 
			" 7)Show all free rooms"<< endl <<" 8)Show all occupied rooms" 
			<< endl << " 9)Show all rooms" <<endl<<" 0)Add tenant(s)" << endl << 
			" E)Exit" << endl << endl << " ";
		cin >> button;
		switch (button)
		{
		case '1':
		{
			system("cls");
			x->num1_finding(x, n);
			break;
		}
		case '2':
		{
			system("cls");
			x->num2_finding(x, n);
			break;
		}
		case '3':
		{
			system("cls");
			x->num3_finding(x, n);
			break;
		}
		case '4':
		{
			system("cls");
			x->all_sp(x, n);
			break;
		}
		case '5':
		{
			system("cls");
			x->without_sp(x, n);
			break;
		}
		case '6':
		{
			system("cls");
			x[x->cheapest(x, n)].print();
			break;
		}
		case '7':
		{
			system("cls");
			for (int i = 0; i < n; i++)
				x[i].print();
			break;
		}
		case '8':
		{
			system("cls");
			for (int i = 0; i < N; i++)
				y[i].print_t();
			break;
		}
		case '9':
		{
			system("cls");
			for (int i = 0; i < n; i++)
				x[i].print();
			for (int i = 0; i < N; i++)
				y[i].print_t();
			break;
		}
		case '0':
		{
			int sprt;
			int num = 0;
			int price = 0;
			cout << " Number of tenants: ";
			int k;
			cin >> k;
			bool tk=x->add(x,k,price, num, n,sprt);
			if (tk)
			{
				y->add_t(y, x, num, b, price, sprt, k, N);
				b += 1;
			}
			break;

		}
		case 'e':
		case 'E':
		{
			system("cls");
			button = 'e';
			break;
		}
		default:
		{
			cout << "Wrong case";
			break;
		}
		}
	}
	delete[]x;
	delete[]y;
}