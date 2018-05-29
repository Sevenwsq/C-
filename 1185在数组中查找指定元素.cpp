#include <stdio.h>
#define MAXN 10
int search( int list[], int n, int x );
int main()
{
    int i, index, n, x;
    int a[MAXN];
    scanf("%d", &n);
    for( i = 0; i < n; i++ )
        scanf("%d", &a[i]);
    scanf("%d", &x);
    index = search( a, n, x );
        printf("%d", index);
    return 0;

}
int search( int list[], int n, int x )
{
	int i, index;
	for(i = 0; i < n; i++)
	{
		if(list[i] == x)
		{
			return i;
		}
	}
		return -1;
}

