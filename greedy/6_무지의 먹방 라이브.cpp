//이 방법은 너무 비효율적이야 다른 방법을 찾아보자..

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> food_times, long long k)
{
	long long time = 0;
	long long flag = 0;
	long long total = 0;
	
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
	
	return flag+1;
}


int main(void)
{
	vector<int> food_times;

	food_times.push_back(3);
	food_times.push_back(1);
	food_times.push_back(2);

	long long k = 5;

	long long result = solution(food_times, k);
	cout << result;

	return 0;
}