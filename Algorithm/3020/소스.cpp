#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <map>
#include <cstdio>
#include <set>
#include <list>
#include <memory.h>
#include <string>
#include <stack>
#include <cmath>
#include <set>
using namespace std;

vector<int> bot, top;
int n, h;

int possible_count(int len, int c) {

}

int main()
{
	cin >> n >> h;
	bot = vector<int>(n); top = vector<int>(n);

	for (int i = 0; i < n / 2; i++) {
		scanf("%d%d", &bot[i], &top[i]);
	}

	sort(bot.begin(), bot.end());
	sort(top.begin(), top.end());


}