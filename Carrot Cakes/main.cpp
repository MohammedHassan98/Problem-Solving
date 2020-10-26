#include <iostream>
using namespace std;
int main()
{
    int n,t,k,d;
    cin >> n >> t >> k >> d;
    int group = (n+k-1)/k;

    int time1 = 0;
    int time2 = d;

    for (int i = 0 ; i < group ; i++){
        if (time1 <= time2) {time1 += t;}
        else {time2 += t;}
    }
    if (max(time1,time2) < group*t){cout << "YES";}
    else {cout << "NO";}
}
