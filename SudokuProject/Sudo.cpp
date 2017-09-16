#include "stdafx.h"
#include"Sudo.h"

void Sudo::Init(int n)
{
	cnt = 0, need = n;
	memset(map, 0, sizeof map);
	memset(vis, 0, sizeof vis);
	memset(col, 0, sizeof col);
	memset(pal, 0, sizeof pal);
}
void  Sudo::Print()
{
		for (int i = 0; i<9; i++)
		{
			for (int j = 0; j<9; j++)
			{
				if (map[i][j] == 0) printf("9 ");
				else printf("%d ", map[i][j]);
			}
			puts("");
		}
		puts("");
}
void  Sudo::Dfs(int num, int row)
{
	if (num == 9)
	{
		Print();
		cnt++;
		if (cnt == need)
			exit(0);
		return;
	}
	for (int j = 0; j < 9; j++)
	{
		int npal = row / 3 * 3 + j / 3;
		if (vis[row][j] || col[num][j] || pal[num][npal])
			continue;
		else
			vis[row][j] = 1, col[num][j] = 1, pal[num][npal] = 1, map[row][j] = num;
		if (row == 8)
			Dfs(num + 1, 0);
		else
			Dfs(num, row + 1);
		vis[row][j] = 0, col[num][j] = 0, pal[num][npal] = 0, map[row][j] = 0;
	}
}