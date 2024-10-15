#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n * 2], fr[100005] = {}, cnt = 0, mx = INT_MIN;

    for (int i = 0; i < n * 2; i++)
    {
        cin >> ar[i];
        ++fr[ar[i]] == 1 ? cnt++ : cnt--;
        mx = max(mx, cnt);
    }

    cout << mx << '\n';

    return 0;
}

/*
.cph file
{
    "name":"A. Andryusha and Socks",
    "group":"Codeforces - Технокубок 2017 - Финал (только для онсайт-финалистов)",
    "url":"https://codeforces.com/problemset/problem/780/A","interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"input":"1\n1 1\n","output":"1\n","id":1728994339510},{"id":1728994339559,"input":"3\n2 1 1 3 2 3\n","output":"2\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"AAndryushaAndSocks"}},
    "batch":{"id":"ff1cf67c-0b2f-4dfc-a839-6d20ab293371","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\A_Andryusha_and_Socks.cpp"
}
*/