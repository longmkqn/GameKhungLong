#pragma once
#include"ThuVien.h"
int hKhungLong = 5;//chieu cao khung long
int xKhungLong = 25; 
int yKhungLong = 17;
string KhungLong[6] =
{
	"           e-e ",
	"         /(\\_/)",
	".___.---' /`-' ",
	" `-._.  )/,,   ",
	"     //        ",
	"    ^^         ",
};

void VeKhungLong(int x, int y)
{
	for (int i = 0; i < 6; i++)
	{
		gotoXY(x, y);
		cout << KhungLong[i];
		y++;
	}
}