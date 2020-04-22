#include <iostream>
#include <time.h>
#include <string>
#include "Header3.h"
using namespace std;
class STK_CoKyHan {
private:
	long int soCMND;
	string Hoten;
	unsigned long long int soTien;
	int Ngay;
	int Thang;
	int Nam;
	double laiSuat;
	int n;
	int soKyHan; //số tháng của kỳ hạn.

public:
	void nhap()
	{
		cout << "So tiet kiem  co ky han! " << endl;
		cout << "Nhap so CMND: ";
		cin >> this->soCMND;
		cout << "Nhap ho ten: ";
		cin >> this->Hoten;
		cout << "Nhap so tien (trieu dong): ";
		cin >> this->soTien;
		cout << "Nhap ngay/thang/nam ma ban bo tien vao ngan hang: ";
		cin >> this->Ngay >> this->Thang >> this->Nam;
		cout << "Nhap lai suat cua ngan hang (%): ";
		cin >> this->laiSuat;
		cout << "Nhap vao ky han: ";
		cin >> this->soKyHan;
	}
	int tienLai()
	{
		laythoigian tg2;
		int year = tg2.getyear();
		int month = tg2.getmonth();

		int dif_year = year - this->Nam;
		int dif_month = month - this->Thang;


		if (dif_year == 0)
		{
			this->n = dif_month;
		}
		else
		{
			this->n = dif_year * 12 + dif_month;
		}
		int tienlai = {};
		if (n >= this->soKyHan)
		{

			double lai_ThapPhan = static_cast<double>(this->laiSuat) / 100;
			tienlai = static_cast<int>(this->soTien * lai_ThapPhan)* (n);
			return tienlai;
		}
		else
			tienlai = 0;

		return tienlai;
	}
};
