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

int N, x = 0, y = 0;

set<vector<pair<int, int>>> grupo;

int main()
{
    optimize;

    cin >> N;

    while (N--)
    {
        int solution = 0;
        grupo.clear();
        string dir;
        cin >> dir;        

        for (auto letra : dir) 
        {
            vector<pair<int, int>> seg;
            int dx = x, dy = y;

            if (letra == 'N') dy++;
            if (letra == 'E') dx++;
            if (letra == 'S') dy--;
            if (letra == 'W') dx--;

            seg.clear();

            seg.push_back({x, y});
            seg.push_back({dx, dy});
            
            sort(ALL(seg));

            if (grupo.find(seg) != grupo.end()) solution++;
            else
            {
                grupo.insert(seg);
                solution += 5;
            }

            x = dx;
            y = dy;
        }

        cout << solution << endl;
    }

    return 0;
}
