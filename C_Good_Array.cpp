#include <iostream>
#include <vector>
using namespace std;

const int N = 1e6 + 5;
int fr[N];
int main()
{
    long long n, sum = 0; cin >> n;

    vector<int> a(n), ans;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fr[a[i]]++;
        sum += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        fr[a[i]]--;
        
        if (sum % 2 == 0 && sum / 2 < N && fr[sum / 2])
            ans.push_back(i + 1);

        sum += a[i];
        fr[a[i]]++;
    }

    cout << ans.size() << '\n';
    for (auto &e : ans) cout << e << ' ';

    return 0;
}

/*
.cph file
{
    "name":"C. Good Array",
    "group":"Codeforces - Codeforces Round 521 (Div. 3)",
    "url":"https://codeforces.com/problemset/problem/1077/C","interactive":false,"memoryLimit":256,"timeLimit":1000,
    "tests":[{"input":"5\n2 5 1 2 2\n","output":"3\n4 1 5\n","id":1729115994795},{"input":"4\n8 3 5 2\n","output":"2\n1 4\n","id":1729115994801},{"id":1729115994812,"input":"5\n2 1 2 4 3\n","output":"0\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"CGoodArray"}},
    "batch":{"id":"9ab79830-4f47-4e1d-8564-647a97ce660f","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\C_Good_Array.cpp"
}
*/