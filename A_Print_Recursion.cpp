#include <iostream>
using namespace std;

void print(int n) {
    if (n == 0) {
        return;
    }
    cout << "I love Recursion" << '\n';
    print(n - 1);
}

int main() {
    int n;
    cin >> n;

    print(n);

    return 0;
}


/*
    .cph file
{
    "name":"A. Print Recursion",
    "group":"Codeforces - Sheet #7 (Recursion)",
    "url":"https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A",
    "interactive":false,"memoryLimit":256,"timeLimit":1000,
    "tests":[{"id":1725493322050,"input":"3\n","output":"I love Recursion\nI love Recursion\nI love Recursion\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"APrintRecursion"}},
    "batch":{"id":"58ee56a5-d3ab-4a4a-aec8-c3a2832aab47","size":1},"srcPath":"d:\\2.1\\C++\\Code\\A_Print_Recursion.cpp"
}
*/