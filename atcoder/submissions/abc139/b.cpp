#include <iostream>
#include <vector>
#include <tuple>
#include <map>
#include <algorithm>
#include <cmath>
#include <deque>
#include <queue>
#include <unistd.h>
#include <set>
#include <queue>
using namespace std;
#define rep(i, n) for(long long i = 0;i < n;i++)


int A, B;
int main(void)
{
	int num = 1;
	cin >> A >> B;
	int i = 0;
	while(num < B){
		num += A - 1;
		i++;
	}
	cout << i << endl;

}
