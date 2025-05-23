#include <stdio.h>

int main() {
   long long int  X, Y;
    scanf("%lld %lld", &X, &Y);

    int sum=X+Y;
    printf("%lld + %lld = %d\n", X, Y, sum);
    long long int multi= X*Y;
    printf("%lld * %lld = %lld\n", X, Y, multi);
    int sub=X-Y;
    printf("%lld - %lld = %d\n", X, Y, sub);

    return 0;
}
