#include <stdio.h>
int one_number(int num);
int test(void);
int main(void){
	printf("���Կ�ʼ\n");
	test();
	printf("���Խ��������ڿ�ʼѰ������f��n��=n������(�������������Լ���)\n");
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
	    printf("%d��������\n", i);
    }
	return 0;
}
int test(void){
	long long int num, i;
	long long int count = 0;
	printf("�����1��n�����й����ж�������1\n");
	printf("������һ������:");
	while(scanf("%d", &num) != 1)
	{
		while(getchar() != '\n')
		  continue;
		printf("�������������һ��������");
	}
	for(i = 1; i <= num; i++)
	{
		count += one_number(i);
	}
	printf("һ����%d������1\n", count);
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
