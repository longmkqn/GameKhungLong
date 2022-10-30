#pragma once
#include"ThuVien.h"
#include"TaoKhung.h"
#include"VeKhungLong.h"
#include"VeMatDat.h"
#include"XuLyVaCham.h"
#include"VatCan.h"

void Play(){
	string space = "               ";
	VeKhung();
	int jump = 14; bool kt_jump = false;
	int score = 0;
	int t[100]; int nt = 0; int count = 0;
	VeKhungLong(xKhungLong, yKhungLong);
	KhoiTaoMatDat();
	VeMatDat(kt_jump);
	int x = xKhungLong, y = yKhungLong;
	//check = 0 thi di xuong
	//check = 1 thi di len
	//check = 2 thi dung im
	int check = 2;
	while (true)
	{
		gotoXY(50, 1);
		cout << "Score: " << score++;
		if (count == 0)
		{
			t[nt++] = 95;
			count = rand() % (65 - 35 + 1) + 35;
		}
		//---- xoa du lieu man hinh --------
		//---------- in data -----
		if (check != 2){
			VeKhungLong(x, y);
		}
		di_chuyen_tree(t, nt);
		if (GameOver(x, y, t, nt) == true)
		{
			break;
		}
		
		DiChuyenDat(ktCham);

		//------- dieu khien --------
		if (_kbhit())
		{
			char c = _getch();
			if (c == -32)
			{
				c = _getch();
				if (c == 72 && check == 2)
				{
					check = 1; kt_jump = true;
				}
			}
		}
		//------ di chuyen -------
		if (check == 1)
		{
			gotoXY(x, y + hKhungLong);
			cout << space;
			y--;
		}
		else if (check == 0)
		{
			gotoXY(x, y);
			cout << space;
			y++;
		}
		
		if (y == yKhungLong - jump)
		{
			check = 0;
		}
		else if (y == yKhungLong)
		{
			if (check != 2)
			{
				VeKhungLong(x, y);
				check = 2; 
				kt_jump = false;
			}

		}

		count--;
		Sleep(20);
	}
	system("cls");
	gotoXY(50, 14);
	cout << "--- GAME OVER ---";
	gotoXY(54, 15);
	cout << "Score: " << score;
}
