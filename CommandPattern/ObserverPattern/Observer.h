#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Observer
{
public:
	virtual string GetType() = 0;
	virtual void Update() = 0;
};

class MobieApp : public Observer
{
private:
public:

	void Update()
	{
		
	}

	string GetType()
	{
		return "MobileApp";
	}
};

class WebApp : public Observer
{
public:
	void Update()
	{

	}

	string GetType()
	{
		return "WebApp";
	}

};

class DesktopApp : public Observer
{
public:
	void Update()
	{

	}

	string GetType()
	{
		return "DesktopApp";
	}
};
