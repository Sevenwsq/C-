#include <stdio.h>
#define MAXN 10
int ArrayShift( int a[], int n, int m );
int main()
{
    int a[MAXN], n, m;
    int i;
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
    ArrayShift(a, n, m);
    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
int ArrayShift( int a[], int n, int m )
{
	int arr[10];
	int j=0;
	for(j = 0; j < n; j++){
			if(n-m>j)
			arr[j+m] = a[j];
			else
			arr[j-(n-m)] = a[j];
		}
	for(j = 0; j < n; j++)
	{
		a[j] = arr[j];
	}
	return a[j];
}
