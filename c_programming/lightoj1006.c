#include<stdio.h>

int a, b, c, d, e, f;
long long int fn( int n )
{
    int an[10000];
    if( n == 0 ) return a;
    else if( n == 1 ) return b;
    else if( n == 2 ) return c;
    else if( n == 3 ) return d;
    else if( n == 4 ) return e;
    else if( n == 5 ) return f;
    else if( an[n] == 0 )
        an[n] = fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) ;

    return an[n];
}

int main()
 {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
