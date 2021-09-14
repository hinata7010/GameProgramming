#include <stdio.h>
#include <windows.h>
int main(void)
{
	int i;
	for(i=1;i<=9;i++)
	{
		gotoxy(35, 5+i);
		printf("%d*%d=%2d",3,i,3*i);
	}
	printf("\n");
	return 0;
}

//3´Ü Ãâ·Â 
