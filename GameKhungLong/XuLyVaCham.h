#pragma once
#include"VeMatDat.h"

string die = "           x-x ";

bool ktCham(int xtree, int x, int y) {
	int xchan_trai = x; int xchan_phai = x + 15;
	int ychan = y + 5;
	//-----
	int xtree_max = xtree + 2;
	int ytree = yDat - 5;
	int ytree_max = yDat;
	//---- fix vung va cham ----
	xchan_trai += 2;
	xchan_phai -= 6;
	if ((xchan_phai >= xtree && xchan_phai <= xtree_max) || (xchan_trai >= xtree && xchan_trai <= xtree_max)) {
		if (ychan >= ytree && ychan <= ytree_max) {
			return true;
		}
	}
	return false;
}
bool GameOver(int x, int y, int t[], int nt){
	for (int i = 0; i < nt; i++)
	{
		if (ktCham(t[i], x, y))
		{
			gotoXY(x, y);
			cout << die;
			return true;
		}
	}
	return false;
}