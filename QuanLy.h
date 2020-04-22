#pragma once
#include <vector>
#include "SoCoKyHan.h"
#include "SoKhongKyHan.h"

class CNganHang
{
public:
	CNganHang();
	~CNganHang();
	void Nhap();
	void Xuat();
	double TongTienLai_SoKKH(SoKKH);
	double TongTienLai_SoCKH(SoCoKyHan);
private:
	vector<SoCoKyHan> _SoCoKyHan;
	vector<SoKKH> _SoKhongKyHan;
};


