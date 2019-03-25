#pragma once
class Date {
private:
	int *day = new int;
	int *month = new int;
	int *year = new int;
public:
	Date();
	Date(int d, int m, int y);
	Date(Date& s);
	~Date();
	void set(int, int, int);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void get();
	void get2();
	int getDay();
	int getMonth();
	int getYear();
	void increase();
};