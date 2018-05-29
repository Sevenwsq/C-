#include "stdio.h" 
struct complex 
{
    double x;
    double y;
};
int main(void)
{
	int i;	
    double a,b;
    struct complex c[2];
    for(i=0;i<2;i++)
        scanf("%lf%lf",&c[i].x,&c[i].y);
    a=c[0].x*c[1].x-c[0].y*c[1].y;
    b=c[0].x*c[1].y+c[0].y*c[1].x;
     printf("product of complex is (%f)+(%f)i\n",a,b);
    return 0;
}

