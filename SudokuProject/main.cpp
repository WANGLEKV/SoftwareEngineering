
#include "stdafx.h"
#include "Sudo.h"
#include<cstdio>
#include <string>
#include <cstring>

int main(int argc, char* argv[])
{
	freopen("sudoku.txt", "w", stdout);
	int num = 0;
	if (argc != 3)	
		return 0;
	else if (strcmp(argv[1], "-c"))
	{
	
		return 0;
	}
	else
	{
		for (int i = 0; i<strlen(argv[2]); i++)
		{
			if (argv[2][i]<'0' || argv[2][i]>'9')
			{
				return 0;
			}
			num = num * 10 + argv[2][i] - '0';
		}
	}
	Sudo sd;
	 
	sd.Init(num);
	sd.Dfs(1, 0);
	return 0;
}


/*
int main()
{
	int num;
	Sudo sd;
	freopen("sudoku.txt", "w", stdout);
	scanf("%d", &num);
	sd.Init(num);
	sd.Dfs(1, 0);
	return 0;
}*/
