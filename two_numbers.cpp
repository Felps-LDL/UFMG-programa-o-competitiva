#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int> 
#define piii pair<pair<int,int>, int>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll

using namespace std;

int N;
vector<int> v1, v2;

bool solution(int num)
{
    for (auto num1 : v1) if (num1 == num) return false;
    for (auto num2 : v2) if (num2 == num) return false;

    return true;
}

int main()
{
    optimize;

    cin >> N;

    while (N--)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    cin >> N;

    while (N--)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    for (auto num1 : v1)
    {
        for (auto num2 : v2)
        {
            if (solution(num1 + num2))
            {
                cout << num1 << " " << num2 << endl;
                return 0; 
            }
        }
    }

    

    return 0;
}
