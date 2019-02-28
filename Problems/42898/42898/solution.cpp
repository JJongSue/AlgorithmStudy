#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
	int answer = 0;
	vector <vector<int>> road(m + 1, vector<int>(n + 1, 0));
	road[m][n - 1] = 1;
	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			road[i][j] = (road[i + 1][j] + road[i][j + 1]) % 1000000007;
			for (int k = 0; k < puddles.size(); k++)
				road[puddles[k][0] - 1][puddles[k][1] - 1] = 0;
		}
	}

	answer = road[0][0];
	return answer;
}
int main()
{
	vector <vector<int>> puddles(1, vector<int>(2, 2));
	cout << solution(4, 3, puddles);
	system("pause");
	return 0;
}