//이 방법은 너무 비효율적이야 다른 방법을 찾아보자..

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> food_times, int k)
{
	int time = 0;
	int flag = 0;
	int total = 0;
	for (int i = 0; i < food_times.size(); i++)
	{
		total = total + food_times[i];
	}
	if (total < k)
	{
		return -1;
	}

	while (time != k)
	{
		if (food_times[flag] != 0)
		{
			time++;
			food_times[flag]--;		
		}
		flag = (flag + 1) % food_times.size();
	}
	
	return flag;
}


int main(void)
{
	vector<int> food_times;

	food_times.push_back(3);
	food_times.push_back(1);
	food_times.push_back(2);

	int k = 5;

	int result = solution(food_times, k);
	cout << result+1;

	return 0;
}