#include <stdio.h>


int main(void)
{
    int n;
    int i;

    printf("Hányszor üdvözöljem a Microsoft alkalmazottait? ");
    scanf("%d", &n);

    for ( i = 1 ; i <= n ; i++ ) {
	printf("A Microsoft minden alkalmazottjának kívánom, hogy szarjon sünt!\n");
    }

    return 0;
}
