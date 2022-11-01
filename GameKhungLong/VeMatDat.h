#pragma once
#include"ThuVien.h"
#include"VeKhungLong.h"
#define sl_ground 90

int xDat = 10; int yDat = yKhungLong + hKhungLong;
char ground[3][sl_ground + 1];
int jump = 14; bool kt_jump = false;
void TaoDat(int i){
	int v = rand() % (15 - 1 + 1) + 1;// [1,15]
	switch (v){
	case 1:
	{
		ground[1][i] = '.'; ground[2][i] = ' '; break;
	}
	case 2:
	{
		ground[1][i] = '-'; ground[2][i] = ' '; break;
	}
	case 3:
	{
		ground[1][i] = '`'; ground[2][i] = ' '; break;
	}
	case 4:
	{
		ground[1][i] = 248; ground[2][i] = ' '; break;
	}
	case 5:
	{
		ground[1][i] = ' '; ground[2][i] = '.'; break;
	}
	case 6:
	{
		ground[1][i] = ' '; ground[2][i] = '-'; break;
	}
	case 7:
	{
		ground[1][i] = ' '; ground[2][i] = '`'; break;
	}
	default:
	{
		ground[1][i] = ' '; ground[2][i] = ' '; break;
	}
	}
}

void KhoiTaoMatDat(){
	for (int i = 0; i < sl_ground; i++){
		ground[0][i] = '_';
		TaoDat(i);
	}
	ground[0][sl_ground] = '\0';
	ground[1][sl_ground] = '\0';
	ground[2][sl_ground] = '\0';
}

void VeMatDat(){
	if (kt_jump == false){
		ground[0][xKhungLong + 4 - xDat] = '^';
		ground[0][xKhungLong + 5 - xDat] = '^';
	}
	else{
		ground[0][xKhungLong + 4 - xDat] = '_';
		ground[0][xKhungLong + 5 - xDat] = '_';
	}
	for (int i = 0; i < 3; i++){
		gotoXY(xDat, yDat + i);
		cout << ground[i];
	}
}

void DiChuyenDat(){
	for (int i = 0; i < sl_ground - 1; i++){
		ground[1][i] = ground[1][i + 1];
		ground[2][i] = ground[2][i + 1];
	}

	TaoDat(sl_ground - 1);
	VeMatDat();
}
