#include <stdio.h>
#include <stdlib.h>

main(void)
{
	int sec;
	printf("�п�J���:");
	scanf("%d",&sec);
	printf("%d��%d��%d��",sec/3600,sec/60,sec);
	system("pause");
	return 0; 
}
