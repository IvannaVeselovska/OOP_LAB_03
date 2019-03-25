#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"
#include <iostream>
using namespace std;

int main() {
	int d, m, y;
	printf("\ninput your date");
	scanf("\n%d%d%d", &d, &m, &y);
	Date *a = new Date(d, m, y);
	a->get();
	printf("\ninput your day");
	scanf("\n%d", &d);
	a->setDay(d);
	printf("\ninput your month");
	scanf("\n%d", &m);
	a->setMonth(m);
	printf("\ninput your year");
	scanf("\n%d", &y);
	a->setYear(y);
	a->get2();
	{
		Date g(*a);
		a->increase();
		g.increase();
		printf("\n day - %d", g.getDay());
		printf("\n month - %d", g.getMonth());
		printf("\n year - %d", g.getYear());
	}
	delete a;
	system("pause");
}