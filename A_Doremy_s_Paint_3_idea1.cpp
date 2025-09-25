// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         if (n == 2)
//         {
//             cout << "Yes\n";
//             continue;
//         }

//         bool all_equal = true;
//         for (int i = 1; i < n; i++)
//         {
//             if (a[i] != a[0])
//             {
//                 all_equal = false;
//                 break;
//             }
//         }
//         if (all_equal)
//         {
//             cout << "Yes\n";
//             continue;
//         }

//         unordered_map<int, int> freq;
//         for (int x : a)
//             freq[x]++;

//         if (freq.size() > 2)
//         {
//             cout << "No\n";
//             continue;
//         }

//         int mn = INT_MAX, mx = INT_MIN;
//         for (auto &p : freq)
//         {
//             mn = min(mn, p.second);
//             mx = max(mx, p.second);
//         }

//         if (n % 2 == 0)
//         {
//             cout << (mn == mx ? "Yes\n" : "No\n");
//         }
//         else
//         {
//             cout << ((mn == mx + 1 || mn == mx - 1) ? "Yes\n" : "No\n");
//         }
//     }
//     return 0;
// }

