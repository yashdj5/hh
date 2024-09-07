#include<stdio.h>
main()

{
	int i,n, len=1;
	char str[20],ch;
	printf("\n\n\t enter string: ");
	gets(str);
	
	for(i=1;i<=n;i++)
	{	str[len]=ch;
		len=len+i;
	}
	str[len] = '\0';
	printf("\n\n\t number string = %d",len);
}

