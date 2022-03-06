#pragma once
#include "room.h"

class tenant: public room
{
	string name[5];
	string surname[5];
	int age[5];
	string gender[5] = {};
	int ID[5];
public:
	void tenant_creating(tenant* tent, int size);
	void print_t();
	void add_t(tenant* tent,room *roo,int num,int b, 
		int p,int sprt, int k,int &size);
};

