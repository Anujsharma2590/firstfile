#include<stdio.h>

int main()
{
	 void fun();
	 fun();
	 fun();
	fun();
}
void fun()
{
	static int i=1;
	auto int j=5;
	printf("%d",(i++));
	printf("%d",(j++));
}
