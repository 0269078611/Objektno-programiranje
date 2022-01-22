#pragma once
#include <iostream>
#include <string>

using namespace std;

class Zivotinja
{
public:
	virtual int num_legs() = 0;
	virtual string species() = 0;
	virtual ~Zivotinja() {}
};

class Pauk : public Zivotinja
{
protected:
	string _species = "Pauk";
	int _num_legs = 8;
};

class Ptica : public Zivotinja
{
protected:
	string _species = "Ptica";
	int _num_legs = 2;
};

class Kukac : public Zivotinja
{
protected:
	string _species = "Kukac";
	int _num_legs = 6;

};

class Tarantula : public Pauk
{
	string _species = "Tarantula";
public:
	virtual string species()override 
	{ 
		return this->_species;
	}
	virtual int num_legs()override 
	{ 
		return this->_num_legs;
	}
};

class Vrabac : public Ptica
{
	string _species = "Vrabac";
public:
	virtual string species()override 
	{ 
		return this->_species;
	}
	virtual int num_legs()override 
	{ 
		return this->_num_legs;
	}
};

class Vrana : public Ptica
{
	string _species = "Vrana";
public:
	virtual string species()override
	{
		return this->_species;
	}
	virtual int num_legs()override
	{
		return this->_num_legs;
	}
};

class Zohar : public Kukac
{
	string _species = "Zohar";
public:
	virtual string species()override 
	{ 
		return this->_species; 
	}
	virtual int num_legs()override 
	{ 
		return this->_num_legs; 
	}
};