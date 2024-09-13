#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> mp;

    for (int i = n; i > 0; --i)
    {
        string name;
        cin >> name;

        mp[name] = i;
    }

    vector<pair<string, int>> vec(mp.begin(), mp.end());

    sort(vec.begin(), vec.end(), [](const pair<string, int> &a, const pair<string, int> &b)
        { return a.second < b.second; });

    for (auto e : vec)
        cout << e.first << '\n';

    return 0;
}

// Another solution
// int main()
// {
//     int n;
//     cin >> n;

//     string a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     set<string> s;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (s.find(a[i]) == s.end())
//         {
//             cout << a[i] << '\n';
//             s.insert(a[i]);
//         }
//     }

//     return 0;
// }


// Time :  O(n log n)
// Space : O(n) 

/*
    .cph file
{
    "name":"B. Chat Order",
    "group":"Codeforces - VK Cup 2016 - Qualification Round 1",
    "url":"https://codeforces.com/problemset/problem/637/B",
    "interactive":false,"memoryLimit":256,"timeLimit":3000,
    "tests":[{"input":"4\nalex\nivan\nroman\nivan\n","output":"ivan\nroman\nalex\n","id":1726156053652},{"id":1726156053647,"input":"8\nalina\nmaria\nekaterina\ndarya\ndarya\nekaterina\nmaria\nalina\n","output":"alina\nmaria\nekaterina\ndarya\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BChatOrder"}},
    "batch":{"id":"7d1636f8-4cc8-41ba-a66f-431d4ec71afc","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\B_Chat_Order.cpp"
}
*/