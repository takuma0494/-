#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("double型の最大値:%g\n",DBL_MAX);
    printf("double型の最小値:%g\n",DBL_MIN);
    printf("double型の精度:%g\n",DBL_DIG);
    printf("INT型の最大値:%g\n",INT_MAX);
    printf("INT型の最大値:%g\n",INT_MIN);
    printf("long型の最大値:%ld\n",LONG_MAX);
    printf("long型の最小値:%ld\n",LONG_MIN);
    printf("long long int型の最大値:%lld\n",LLONG_MAX);
    printf("long long int型の最小値:%lld\n",LLONG_MAX);
    printf("short型の最大値:%g\n",SHRT_MAX);
    printf("short型の最小値:%g\n",SHRT_MIN);
    printf("long型の最大値:%ld\n",LONG_MAX);
    printf("long double型の最大値:%Lg\n",LDBL_MAX);
    printf("long double型の最小値:%Lg\n",LDBL_MIN);
    return 0;
}