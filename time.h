#pragma once
#include <iostream>
#include<ctime>
#include <time.h>
using namespace std;
class Time
{
public:
	Time();
	Time(int, int, int);
	void Nhap();
	~Time();
	int getDay();
	int getMonth();
	int getYear();


private:
	int day;
	int month;
	int year;
};
