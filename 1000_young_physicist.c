#include <stdio.h>

#define ll long long

int main() {
 
    ll n;
    scanf("%lld", &n);
    ll x = 0, y = 0, z = 0;

    for(int i = 0; i < n; ++i)
    {
        ll a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        x += a;
        y += b;
        z += c;
    }
    if (x == 0 && y == 0 && z == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
