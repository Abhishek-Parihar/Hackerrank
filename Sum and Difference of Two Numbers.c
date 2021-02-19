#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,Is,Id;
    float c,d=2,Fs,Fd;
    scanf("%d %d %f %f",&a,&b,&c,&d);
    Is=a+b;
    Id=a-b;
    printf("%d %d\n",Is,Id);
    Fs=c+d;
    Fd=c-d;
    printf("%.1f %.1f",Fs,Fd);
    return 0;
}

