#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, k, t, sum = 0;
    int m = 0;
    cin >> n;
    cin >> k;

    pair<int, int> c;
    vector<pair<int, int>> days;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        sum = sum + t;
        c = make_pair(t, i);
        days.push_back(c);
    }
    if (sum == k)
    {
        cout << n << endl;
        for (int j = 0; j < n; j++)
        {
            cout << j + 1 << ' ';
        }
    }
    else
    {
        sort(days.begin(), days.end());
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += days[i].first;
            if (sum > k)
            {
                break;
            }
            m++;
        }

        cout << m << endl;
        for (int j = 0; j < m; j++)
        {
            cout << days[j].second + 1 << " ";
        }
    }
}