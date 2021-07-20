//너무 어려워... 알고리즘 다시 짜기..

#include <iostream>
#include <vector>
using namespace std;

bool solution(vector<vector<int>> key, vector<vector<int>> lock)
{

}

int main(void)
{
	vector<vector<int>> key = { {0, 0, 0},{1, 0, 0},{0, 1, 1} };
	vector<vector<int>> lock = { {1,1,1},{1,1,0},{1,0,1} };
	
	bool res = solution(key, lock);
	cout << res << endl;

	return 0;
}