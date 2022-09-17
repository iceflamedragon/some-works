//检测文段中两个字符的单词数量
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int scan(void);
int main(void)
{
	int num=0;
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if (ch != 'e')
			;
		else
		{

			if (scan() == 1)
				num++;
			else;
		}
	}
	printf("%d", num);
	return 0;

}
int scan(void)
{
	char ch;
	if ((ch = getchar()) == 'i')
		return 1;
	else return 0;
}