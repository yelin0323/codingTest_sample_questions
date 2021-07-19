#include <iostream>
#include <string>

using namespace std;

int solution(string str)
{
    int ans = str.size();

    for (int step = 1; step < ((str.size() / 2) + 1); step++)
    {
        string compressed = "";
        string prev = str.substr(0, step); //string 0번부터 step만큼 가져오기
        int repeat = 1;

        for (int i = step; i < str.size(); i = i + step)
        {
            if (prev == str.substr(i, step))
            {
                repeat++;
            }
            else
            {
                if (repeat >= 2)
                {
                    compressed += to_string(repeat) + prev;
                }
                else
                {
                    compressed += prev;
                }
                prev = str.substr(i, step);
                repeat = 1;
            }
        }
        
        if (repeat >= 2)
            compressed += to_string(repeat) + prev;
        else
            compressed += prev;
        ans = min(ans, (int)compressed.size());
    }

    return ans;
}

int main(void)
{
    string str = "aabbaccc";
    int  res = solution(str);

    cout << res << endl;

	return 0;
}