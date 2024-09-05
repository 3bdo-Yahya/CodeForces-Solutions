#include <iostream>
using namespace std;
void print(int n) {
    if (n == 0) {
        return;
    }
    if(n > 1) cout << n << ' ';
    else cout << n;
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
    "name":"C. Print from N to 1",
    "group":"Codeforces - Sheet #7 (Recursion)",
    "url":"https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C",
    "interactive":false,"memoryLimit":64,"timeLimit":1000,
    "tests":[{"id":1725493952934,"input":"4\n","output":"4 3 2 1\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"CPrintFromNTo1"}},
    "batch":{"id":"e6f69851-acab-49c6-a216-9193119ea940","size":1},"srcPath":"d:\\2.1\\C++\\Code\\C_Print_from_N_to_1.cpp"
}    
*/