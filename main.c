#include <stdio.h>
#include <stdlib.h>

int inc (int counter);
int main(int argc, char *argv[])
{

	
	int i = 10;
	printf("함수 호출전 i=%d\n", i);
	i = inc(i); //함수 안 결과가 이 변수에 들어간다 
	printf("함수 호출후 i=%d\n", i);
	return 0;
}

int inc(int counter)
{
	counter++;
	return counter;
}

