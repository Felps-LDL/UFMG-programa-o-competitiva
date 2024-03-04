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
int tam, cont = 0;
string num;

int main()
{
    optimize;

    cin >> tam >> num;

    for (auto digito : num) if (digito == 'n') cont++;
    
    for (int i = 0; i < cont - 1; i++) cout << "1 ";
    if (cont) cout << 1;

    tam -= (cont * 3);

    for (int i = 0; i < tam / 4; i++) cout << " 0";

    cout << endl;
    return 0;
}
