#include <stdio.h>
int one_number(int num);
int test(void);
int main(void){
	printf("测试开始\n");
	test();
	printf("测试结束，现在开始寻找满足f（n）=n的数字(输入任意数字以继续)\n");
	while(getchar()!='\n')
	  continue;
	getchar();
	long long int count, i;
	long long int num;
	int digit;
	count = 0;
	for(i = 1; i <= 100000000L; i++)
    {
	    num = i;
		while(num>0)
	    {
	    	digit = num%10;
	    	if(digit == 1)
	    	  count++;
	    	num = num/10;
		}
        if(count == i)
	    printf("%d符合条件\n", i);
    }
	return 0;
}
int test(void){
	long long int num, i;
	long long int count = 0;
	printf("计算从1到n的数中共含有多少数字1\n");
	printf("请输入一个整数:");
	while(scanf("%d", &num) != 1)
	{
		while(getchar() != '\n')
		  continue;
		printf("输入错误，请输入一个整数：");
	}
	for(i = 1; i <= num; i++)
	{
		count += one_number(i);
	}
	printf("一共有%d个数字1\n", count);
	return 0;
}

int one_number(int num){
	int digit;
	long long int count = 0;
	while(num >0){
		digit = num%10;
		if(digit == 1)
		  count++;
		num = num/10;
	}
	return count;
}
