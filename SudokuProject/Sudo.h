#pragma once
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;

class Sudo {
public:
	int cnt, need;
	int vis[9][9], col[9][9], pal[9][9];
	int map[9][9];
	void Init(int n);
	void Print();
	void Dfs(int num, int row);
};
