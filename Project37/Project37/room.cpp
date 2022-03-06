#include "room.h"
#include "tenant.h"

void room::rooms_creating(room* roo, int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		roo[i].price = ((rand() % 30000 + 20000) / 1000) * 1000;
		roo[i].rNumber = i + 1;
		roo[i].rQuantity = rand() % 3 + 1;
		roo[i].sport = rand() % 2;
		roo[i].free = false;

	}
}


void room::print()
{
	setcol(14); 
	cout <<endl<<endl<<char(201)<< char(205)<< char(205) << char(205) << char(205) << char(205) << char(205) << char(205)<< char(205) << char(205) << char(205) << char(205) << char(205)<< char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)<< char(205)<< char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)<< char(205)<< char(205) <<char(187)<<endl<<char(186);
	setcol(11);
	cout  << " Room's price - " << price<<" dram/night\t\t\t";
	setcol(14);
	cout << char(186)<<endl<<char(186);
	setcol(11);
	cout << " Room's number - " << rNumber << "\t\t\t\t\t";
	setcol(14);
	cout << char(186) << endl << char(186);
	setcol(11);	
	cout << " Tenant's quantity - " << rQuantity << "\t\t\t\t\t";
	setcol(14);
	cout << char(186) << endl << char(186);
	setcol(11);
	cout << " Sport package - " << ((sport == 1) ? "This room have sport package    " : "This room doesn't have sport package") << "\t";
	setcol(14);
	cout << char(186) << endl << char(186);
	setcol(11);
	cout << " Status - "<< ((free == 1) ? "This room isn't free" : "This room is free") << "\t\t\t\t";
	setcol(14);
	cout << char(186)<<endl<<char(200) << char(205) << char(205) << char(205) << char(205) << char(205)<< char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	setcol(7);
}

void room::num1_finding(room* roo, int size)
{	
	char button2 = '9';
	while (button2 != '0')
	{

		cout << " Do u need sport package?" << endl << " ";
		setcol(11);
		cout << "Y";
		setcol(7);
		cout << "es" << endl;
		setcol(11);
		cout << " N";
		setcol(7);
		cout << "o" << endl << " ";
		setcol(8);
		cout << "0ut" << endl << " ";
		setcol(7);
		cin >> button2;
		switch (button2)
		{
		case 'Y':
		case 'y':
		{
			for (int i = 0; i < size; i++)
				if (roo[i].rQuantity == 1 && roo[i].sport == 1)
					roo[i].print();
			break;
		}
		case 'N':
		case 'n':
		{
			for (int i = 0; i < size; i++)
				if (roo[i].rQuantity == 1 && roo[i].sport == 0)
					roo[i].print();
			break;
		}
		case '0':
		{
			system("cls");
			button2 = '0';
			break;
		}
		default:
		{
			system("cls");
			cout << endl << "Wrong operation";
			break;
		}
		}

	}
}
void room::num2_finding(room* roo, int size)
{
	char button2 = '9';
	while (button2 != '0')
	{

		cout << " Do u need sport package?" << endl << " ";
		setcol(11);
		cout << "Y";
		setcol(7);
		cout << "es" << endl;
		setcol(11);
		cout << " N";
		setcol(7);
		cout << "o" << endl << " ";
		setcol(8);
		cout << "0ut"<<endl<<" ";
		setcol(7);
		cin >> button2;
		switch (button2)
		{
		case 'Y':
		case 'y':
		{
			for (int i = 0; i < size; i++)
				if (roo[i].rQuantity == 2 && roo[i].sport == 1)
					roo[i].print();
			break;
		}
		case 'N':
		case 'n':
		{
			for (int i = 0; i < size; i++)
				if (roo[i].rQuantity == 2 && roo[i].sport == 0)
					roo[i].print();
			break;
		}
		case '0':
		{
			system("cls");
			button2 = '0';
			break;
		}
		default:
		{
			system("cls");
			cout << endl << "Wrong operation";
			break;
		}
		}

	}
}
void room::num3_finding(room* roo, int size)
{
	char button2 = '9';
	while (button2 != '0')
	{

		cout << " Do u need sport package?" << endl << " ";
		setcol(11);
		cout << "Y";
		setcol(7);
		cout << "es" << endl;
		setcol(11);
		cout << " N";
		setcol(7);
		cout << "o" << endl << " ";
		setcol(8);
		cout << "0ut" << endl << " ";
		setcol(7);
		cin >> button2;
		switch (button2)
		{
		case 'Y':
		case 'y':
		{
			for (int i = 0; i < size; i++)
				if (roo[i].rQuantity == 3 && roo[i].sport == 1)
					roo[i].print();
			break;
		}
		case 'N':
		case 'n':
		{
			for (int i = 0; i < size; i++)
				if (roo[i].rQuantity == 3 && roo[i].sport == 0)
					roo[i].print();
			break;
		}
		case '0':
		{
			system("cls");
			button2 = '0';
			break;
		}
		default:
		{
			system("cls");
			cout << endl << "Wrong operation";
			break;
		}
		}

	}
	}

void room::all_sp(room* roo, int size)
{
	for (int i = 0; i < size; i++)
		if (roo[i].sport == 1)
			roo[i].print();
}

void room::without_sp(room * roo, int size)
{
	for (int i = 0; i < size; i++)
		if (roo[i].sport == 0)
			roo[i].print();
}
int room::cheapest(room* roo, int size)
{
	int min = roo[0].price,tex=0;
	for (int i = 0; i < size; i++)
		if (roo[i].price < min)
		{
			min = roo[i].price;
			tex = i;
		}
	return tex;
}
bool room::add(room* roo,int quantity,int &price, int &num, int &size,int &sprt)
{
	int t;
	bool ka=false;
	for (int i = 0; i < size; i++)
		if (roo[i].rQuantity == quantity)
		{
			roo[i].print();
			ka = true;
		}
	if (!ka)
	{
		cout << " There is no rooms for " << quantity << " tenant(s)";
		return ka;
	}
	else
	{
		cout << endl << endl << " Select room's number: ";
		cin >> t;
		num = t;
		price = roo[num - 1].price;
		sprt = roo[num - 1].sport;
		for (int i = t - 1; i < size - 1; i++)
		{
			roo[i] = roo[i + 1];
		}
		size -= 1;
	}
	
}
void room::setcol(unsigned int a)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, a);
}

