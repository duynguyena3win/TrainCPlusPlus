#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Graphic.h"
using namespace std;

class QuanCo
{
protected:
	AbstractGraphic* Graphics_2D;
	string _ten;
public:
	virtual string GetTen() = 0;
};

class Xe : public QuanCo
{
public:
	Xe()
	{
		_ten = "Xe";
	}
	string GetTen()
	{
		return "Xe";
	}
};

class Vua : public QuanCo
{
public:
	Vua()
	{
		_ten = "Vua";
	}
	string GetTen()
	{
		return "Vua";
	}
};

class Tot : public QuanCo
{
public:
	Tot()
	{
		_ten = "Tot";
	}
	string GetTen()
	{
		return "Tot";
	}
};

class Hau : public QuanCo
{
public:
	Hau()
	{
		_ten = "Hau";
	}
	string GetTen()
	{
		return "Hau";
	}
};

class Tuong : public QuanCo
{
public:
	Tuong()
	{
		_ten = "Tuong";
	}
	string GetTen()
	{
		return "Tuong";
	}
};

class Ma : public QuanCo
{
public:
	Ma()
	{
		_ten = "Ma";
	}
	string GetTen()
	{
		return "Ma";
	}
};