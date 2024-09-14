#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        int n, ans = INT_MAX;
        cin >> n;

        map<int, int> Fr, FrOfFr;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            Fr[x]++;
            FrOfFr[Fr[x]]++;
            
            ans = min(ans, n - FrOfFr[Fr[x]] * Fr[x]);
        }
            
        cout << ans << '\n';

    }

    return 0;
}

// Time:  O(tc * n log n)
// Space: O(n)

// Another solution

/*
int main() {
    int tc;
    cin >> tc;
 
    while(tc--) {
        int n;
        cin >> n;
 
        int ar[n];
        map<int, int> C;
 
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
            C[ar[i]]++;
        }
 
        map<int, int> fr;
        int cnt_r = C.size();
 
        for(auto [x, c] : C) fr[c]++;
 
        int sum_l = 0, sum_r = n, ans = n;
 
        for(auto [c, f] : fr) {
            ans = min(ans, sum_l + sum_r - cnt_r * c);
            sum_l += c * f;
            sum_r -= c * f;
            cnt_r -= f;
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}


// Time:  O(tc * n log n)
// Space: O(n log n)

/*
    .cph file
{
    "name":"F. Equalize the Array",
    "group":"Codeforces - Codeforces Round 702 (Div. 3)",
    "url":"https://codeforces.com/problemset/problem/1490/F",
    "interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"id":1726244963450,"input":"3\n6\n1 3 2 1 4 2\n4\n100 100 4 100\n8\n1 2 3 3 3 2 6 6\n","output":"2\n1\n2\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"FEqualizeTheArray"}},
    "batch":{"id":"20582cbb-0fa5-41bc-97c8-161d79eca6ba","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\F_Equalize_the_Array.cpp"
}
*/