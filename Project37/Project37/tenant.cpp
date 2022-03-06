#define _CRT_SECURE_NO_WARNINGS
#include "tenant.h"

void tenant::tenant_creating(tenant* tent, int size)
{	
	
	string names[26] = { "Artyom","Mike", "Anahit", "Mary", "Qristina", "Artur", "John","Alvard", "Mishel" , 
		"Syune", "Ripsime", "Liana", "Armine", "Srbuhi", "Jayne", "Marina", "Bella", "Lenka","Samvel",
		"Arame", "Vardan", "Sergey", "Gevorg", "Tigran" };
	string surnames[19] = { "Harutyunyan", "Hayrapetyan","Shegiyan","Krnatyan", "Ananyan", 
		"Smith","Byughen","Aghdalyna","Miqayelyan","Ayvazyan","Kyureghyan", "Shamilyan", "Martirosyan",
		"Davis","Ghajoyan","Shanoyan","Williams", "Miller","Karoyan" };
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tent[i].price = ((rand() % 30000 + 15000) / 1000) * 1000;
		tent[i].rQuantity = rand()%3 + 1;
		tent[i].rNumber = i + size+1;
		tent[i].sport = rand() % 2;
		tent[i].free = true;
		for (int j = 0; j < tent[i].rQuantity; j++)
		{
			tent[i].name[j] = names[rand() % 24];
			tent[i].surname[j] = surnames[rand() % 19];
			tent[i].age[j] = rand() % 60 + 1;
			int k = rand() % 100;
			if (tent[i].name[j] == "Anna" || tent[i].name[j] == "Mary" || tent[i].name[j] == "Qristina" || tent[i].name[j] == "Emma" 
				|| tent[i].name[j] == "Mishel" || tent[i].name[j] == "Alvard" || tent[i].name[j] == "Syune" || tent[i].name[j] == "Ripsime" 
				|| tent[i].name[j] == "Liana"|| tent[i].name[j] == "Armine" || tent[i].name[j] == "Srbuhi" || tent[i].name[j] == "Jayne" 
				|| tent[i].name[j] == "Marina"|| tent[i].name[j] == "Bella" || tent[i].name[j] == "Lenka" || tent[i].name[j] == "Avgustina")
				tent[i].gender[j] = "Female";
			else
				tent[i].gender[j] = "Male";
			tent[i].ID[j] = rand() % 313131 + 166666;
		}
	}	
}

void tenant::print_t()
{
	setcol(7);
	cout << endl << endl << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) 
		<< char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
		<< char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
		<< char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) 
		<< char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl << char(186);
	setcol(12);
	cout << " Room's price - " << price << " dram/night\t\t\t";
	setcol(7);
	cout << char(186) << endl << char(186);
	setcol(12);
	cout << " Room's number - " << rNumber << "\t\t\t\t\t";
	setcol(7);
	cout << char(186) << endl << char(186);
	setcol(12);
	cout << " Number of rooms - " << rQuantity << "\t\t\t\t\t";
	setcol(7);
	cout << char(186) << endl << char(186);
	setcol(12);
	cout << " Sport package - " << ((sport == 1) ? "This room have sport package    " : "This room doesn't have sport package") << "\t";
	setcol(7);
	cout << char(186) << endl << char(186);
	setcol(12);
	cout << " Status - " << ((free == 1) ? "This room isn't free" : "This room is free") << "\t\t\t\t";
	setcol(7);
	cout << char(186) << endl<<char(186)<< "\t\t\t\t\t\t\t" << char(186)<<endl;
	for (int i = 0; i < rQuantity; i++)
	{
		cout<< char(186);
		setcol(4);
		cout<< " ID:"<<ID[i]<<" " << name[i] << " " << surname[i] << "\t\t\t\t";
		setcol(7);
		cout << char(186) << endl;
		cout << char(186);
		setcol(4);
		cout << " Age: " << age[i]<<"\t\t\t\t\t\t";
		setcol(7);
		cout << char(186) << endl;
		cout << char(186);
		setcol(4);
		cout << " Gender:-->" << gender[i] << "\t\t\t\t\t";
		setcol(7);
		cout << char(186) << endl<<  char(186)<<"\t\t\t\t\t\t\t"<<char(186) << endl;


	}
	cout<<char(200) << char(205) << char(205) << char(205) << char(205) 
		<< char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << 
		char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << 
		char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << 
		char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	setcol(7);	
}

void tenant::add_t(tenant* tent, room* roo,int num, int b, int p, int sprt, int k, int& size)
{
	cout << endl;
	for (int i = size; i < b+1; i--)
		tent[i] = tent[i + 1];
	size += 1;
	for (int i = 0; i < k; i++)
	{
		cout << endl;
		cout << " Name: ";
		cin >> tent[b].name[i];
		cout << " Surname: ";
		cin >> tent[b].surname[i];
		cout << " Age: ";
		cin >> tent[b].age[i];
		cout << " ID: ";
		cin >> tent[b].ID[i];
		cout << " Gender: ";
		cin >> tent[b].gender[i];
	}
	tent[b].price = p;
	tent[b].rNumber = num;
	tent[b].rQuantity = k;
	tent[b].sport = sprt,
	tent[b].free = true;
}