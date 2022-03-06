#pragma once
#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

class room
{
protected:
	int price; 
	int rNumber; 
	int rQuantity; 
	int sport; 
	bool free; 
public:
	void setcol(unsigned int a);
	void rooms_creating(room* roo, int size);
	void num1_finding(room* roo, int size);
	void num2_finding(room* roo, int size);
	void num3_finding(room* roo, int size);
	void all_sp(room* roo, int size);
	void without_sp(room* roo, int size);
	int cheapest(room* roo, int size);
	void print();
	bool add(room* roo,int quantity,int &price
	,int &num, int &size,int &sprt);
};








