#pragma once

#include <string>
#include <iostream>
#include <ctime>
#include "time.h"
using namespace std;
class SoKKH
{
public:
	SoKKH();
	~SoKKH();
	void Nhap();
	int CMND;
	string Name;
	long long money;
	double LaiSuat;
	Time NgayLapSo;
private:
	
};

