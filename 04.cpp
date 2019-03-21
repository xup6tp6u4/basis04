#include <stdio.h>
#include <stdlib.h>

main(void)
{
	int sec;
	printf("請輸入秒數:");
	scanf("%d",&sec);
	printf("%d時%d分%d秒",sec/3600,sec/60,sec);
	system("pause");
	return 0; 
}
