#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n == 2)
        {
            cout << "Yes\n";
            continue;
        }
        map<int, int> freq;
        for (int x : a)
            freq[x]++;
        if (freq.size() > 2)
        {
            cout << "No\n";
            continue;
        }
        if (freq.size() == 1)
        {
            cout << "Yes\n";
            continue;
        }
        vector<int> v;
        for (auto &p : freq)
            v.push_back(p.second);

        if (abs(v[0] - v[1]) > 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}
