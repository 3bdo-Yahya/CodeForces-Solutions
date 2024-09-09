#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int sz;
    cin >> sz;

    vector<int> arr(sz);
    for (int i = 0; i < sz; i++) cin >> arr[i];

    priority_queue<int, vector<int>, greater<int>> pq;
    long long sum = 0;

    for (int i = 0; i < sz; i++)
    {
        if (sum + arr[i] >= 0)
        {
            sum += arr[i];
            pq.push(arr[i]);
        }
        else
        {
            if (!pq.empty())
            {
                long long check = sum - pq.top() + arr[i];

                if (pq.top() < arr[i] && check >= 0)
                {
                    sum = check;
                    pq.pop();
                    pq.push(arr[i]);
                }
            }
        }
    }

    cout << pq.size();

    return 0;
}

// Time: O(sz log sz)
// Space: O(sz)

/*
    .cph file
{
    "name":"C2. Potions (Hard Version)",
    "group":"Codeforces - Codeforces Round 723 (Div. 2)",
    "url":"https://codeforces.com/problemset/problem/1526/C2",
    "interactive":false,"memoryLimit":256,"timeLimit":1000,
    "tests":[{"id":1725761027258,"input":"6\n4 -4 1 -3 1 -3\n","output":"5\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"C2PotionsHardVersion"}},
    "batch":{"id":"d8ab4431-60b0-4184-861a-d62dada97ffe","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\C_2_Potions_Hard_Version.cpp"
}
*/