#pragma once
#include"VeMatDat.h"


void VeKhung(){
	for (int y = 2; y <= yDat + 3; y++){
		gotoXY(xDat - 1, y); cout << "=";
		gotoXY(xDat + sl_ground + 1, y); cout << "=";
	}
	for (int x = xDat; x <= xDat + sl_ground + 1; x++){
		gotoXY(x, 2); cout << "=";
		gotoXY(x + 1, yDat + 3); cout << "=";
	}
}