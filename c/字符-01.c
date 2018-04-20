#include <stdio.h>

int main()
{

	int cn1 = 0;
	int cn2 = 0;
	int cn3 = 0;

	int c;

	while((c = getchar()) != EOF)
	{
		if (c == ' ')
			cn1++;
		if (c == '\t')
			cn2++;
		if (c == '\n')
			cn3++;
		if (c == 'p')      //跳出while循环
			break;
	}
	
	printf("当前空格数：%d 制表符：%d 换行符：%d\n",cn1,cn2,cn3);

	return 0;


}
