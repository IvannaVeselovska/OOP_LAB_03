#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"
#include <iostream>
#include "stdlib.h"
using namespace std;

Date::Date() 
{
	printf("\nconstructor without parameters\n");
}
Date::~Date() 
{
	printf("\ndestructor\n");
	delete day;
	delete month;
	delete year;
}
Date::Date(Date&s) 
{
	printf("\ncopy constructor\n");
	*(this->day) = *(s.day);
	*(this->month) = *(s.month);
	*(this->year) = *(s.year);
}
Date::Date(int d, int m, int y) 
{
	printf("\nconstructor with parameters\n");
	this->set(d, m, y);
}
void Date::set(int d, int m, int y) 
{

	if (d > 0 && m > 0 && d < 32 & m < 13 && y>0)
	{
		if (m == 2)
		{
			if (y % 4 == 0)
			{
				if (d < 30)
				{
					*(this->day) = d;
					*(this->month) = m;
					*(this->year) = y;
				}
				else throw "something went wrong";
			}
			else if (d < 29) {
				*this->day = d;
				*this->month = m;
				*this->year = y;
			}
			else throw "something went wrong";
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			if (d < 31) {
				*this->day = d;
				*this->month = m;
				*this->year = y;
			}

		}
		else {
			*this->day = d;
			*this->month = m;
			*this->year = y;
		}
	}
	else throw "something went wrong";
}
void Date::setDay(int d) 
{

	if (d > 0 && d < 32)
	{
		*this->day = d;
	}
}
void Date::setMonth(int m)
{

	if (m > 0 && m < 13)
	{
		*this->month = m;

	}
}
void Date::setYear(int y) 
{
	if (y > 0) 
	{
		*this->year = y;
	}
}
int Date::getDay() 
{
	return *this->day;
}
int Date::getMonth() 
{
	return *this->month;
}
int Date::getYear()
{
	return *this->year;
}
void Date::increase() 
{
	if (*(this->month) == 2)
	{
		if (*(this->year) % 4 == 0)
		{
			if (*this->day == 29) {
				*(this->day) = 1;
				(*this->month)++;
			}
			else throw "something went wrong";
		}
		else if (*this->day == 28)
		{
			*this->day = 1;
			(*this->month)++;
		}
		else throw "something went wrong";
	}
	else if (*(this->month) == 4 || *(this->month) == 6 || *(this->month) == 9 || *(this->month) == 11)
	{
		if (*(this->day) == 30) {
			*(this->day) = 1;
			(*this->month)++;
		}
		else throw "something went wrong";
	}
	else if (*(this->day) == 31 && *(this->month) == 12) 
	{
		*(this->day) = 1;
		*(this->month) = 1;
		(*this->year)++;
	}
}
void Date::get() 
{
	printf("\n%d/%d/%d", *this->year, *this->month, *this->day);
}
void Date::get2() 
{
	printf("\n%d-%d-%d", *this->year, *this->month, *this->day);
}