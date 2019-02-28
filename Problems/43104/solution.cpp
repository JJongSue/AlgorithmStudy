#include <string>
#include <vector>
#include <iostream>
using namespace std;
long long solution(int N) {
    /*
    long long a=1, b=1, tmp;
    for(int i=3;i<N+2;i++){
        tmp=b;
        b+=a;
        a=tmp;g
    }
    return (b+a)*2;*/
    
    
    long long p[80]= {1, 1,};
    for(int i=2;i<80;i++) p[i]=p[i-1]+p[i-2];
    return (p[N-1]+p[N])*2;
}
int main()
{
    cout << solution(6);
    return 0;
}