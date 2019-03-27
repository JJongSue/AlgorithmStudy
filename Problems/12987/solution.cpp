#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0, i=0, j=0;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    while(j < A.size())
    {
        if(A.at(i) < B.at(j))
        {
            i++;
            j++;
            answer++;
        }
        else j++;
    }
    return answer;
}

int main(void)
{
    vector<int> A, B;
    A.push_back(5);
    A.push_back(1);
    A.push_back(3);
    A.push_back(7);
    B.push_back(2);
    B.push_back(2);
    B.push_back(6);
    B.push_back(8);
    
    cout <<solution(A, B) << endl;
    return 0;
}