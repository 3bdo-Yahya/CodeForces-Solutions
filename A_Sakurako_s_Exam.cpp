#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a, b;
        cin >> a >> b;

        if (a % 2 == 0 && b % 2 == 0)
            cout << "YES\n";

        else if (a % 2 == 0 && a >= 2)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}


/*
    .cph file
{
    "name":"A. Sakurako's Exam",
    "group":"Codeforces - Codeforces Round 970 (Div. 3)",
    "url":"https://codeforces.com/contest/2008/problem/A",
    "interactive":false,"memoryLimit":256,"timeLimit":1000,
    "tests":[{"id":1725204977688,"input":"5\n0 1\n0 3\n2 0\n2 3\n3 1\n","output":"NO\nNO\nYES\nYES\nNO\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"ASakurakosExam"}},
    "batch":{"id":"3880aee2-85fb-41b0-985d-f6d7004626bd","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\A_Sakurako_s_Exam.cpp"
}
*/