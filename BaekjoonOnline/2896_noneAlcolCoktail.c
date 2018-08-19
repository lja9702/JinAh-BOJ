#include<cstdio>

#define MIN(a,b)(a>b?b:a)

int gcd(int a, int b) {
    if(a < b)
        return gcd(b, a);
    if(a % b == 0)
        return b;
    return gcd(b, a%b);
}

int main()
{
    double A,B,C;
    int a,b,c, g;
    double min;

    scanf("%lf %lf %lf",&A,&B,&C);
    scanf("%d %d %d", &a,&b,&c);
    g = gcd(gcd(a, b), c);

    a /= g;
    b /= g;
    c /= g;

    min = MIN(A / a, MIN(B / b, C / c));

    A-= min * a;
    B-= min * b;
    C-= min * c;
    printf("%.4lf %.4lf %.4lf\n", A, B, C);

    return 0;
}