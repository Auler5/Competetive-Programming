#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
#define ll long long
#define ff first
#define ss second

int main()
{
    int n, t, i, j, mx = 0;
    cin >> n >> t;
    int a[n], sum = 0;

    for(i = 0; i < n; i++)
        cin >> a[i];

    i = j = 0;
    while(i < n && j < n)
    {
        if(sum + a[j] <= t)
        {
            sum += a[j];
            mx = max(mx, j-i+1);
            j++;
        }
        else
        {
            sum -= a[i];
            i++;
        }
    }

    cout << mx;
}
