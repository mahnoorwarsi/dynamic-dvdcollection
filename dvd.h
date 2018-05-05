#include <iostream>
#include <string>
using namespace std;

class dvd
{
private:
	string title;
	int cost;
	string brand;

public:
	dvd()
	{
		this->cost = 0;
		this->title = " ";
		this->brand = " ";
	}
	dvd(string title, string brand, int cost)
	{
		this->cost = cost;
		this->title = title;
		this->brand = brand;
	}
	dvd(dvd& clone)
	{
		this->cost = clone.cost;
		this->title = clone.title;
		this->brand = clone.brand;
	}
	void setcost(int cost)
	{
		this->cost = cost;
	}
	void settitle(string title)
	{
		this->title = title;
	}
	void setbrand(string brand)
	{
		this->brand = brand;
	}
	int getcost()
	{
		return this->cost;
	}
	string gettitle()
	{
		return this->title;
	}
	string getbrand()
	{
		return this->brand;
	}
	void operator =(dvd & d)
	{
		this->title=d.title;
 this->brand=brand;
 this->cost= cost;
			}


};