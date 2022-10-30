#pragma once
#include"ThuVien.h"
#include"VeMatDat.h"

string tree[5]
{
	"+++",
	"+++",
	"+++",
	" + ",
	" + ",
};

void VeCay(int x){
	int y = yDat - 5;
	for (int i = 0; i < 5; i++)
	{
		gotoXY(x, y + i);
		cout << tree[i];
	}
}

void clearTree(int x){
	int y = yDat - 5;
	for (int i = 0; i < 5; i++)
	{
		gotoXY(x + 3, y + i);
		cout << " ";
	}
}

void xoa(int a[], int& n, int vt){
	for (int i = vt; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

void di_chuyen_tree(int t[], int& nt)
{
	if (t[0] == xDat)
	{
		xoa(t, nt, 0);
		clearTree(xDat);
		clearTree(xDat - 1);
		clearTree(xDat - 2);
	}
	for (int i = 0; i < nt; i++)
	{
		VeCay(t[i]);
		clearTree(t[i]);
		t[i]--;
	}
}