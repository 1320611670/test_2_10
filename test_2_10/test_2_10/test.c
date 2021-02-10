#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

struct Stu
{
	char name[20];
	int age;
	char id[20];
};

int fun()
{
	static int count = 1;
	return ++count;
}

int main()
{
	/*int a = 10;
	struct Stu s1 = { "ÕÅÈý",20,"2019010305" };
	struct Stu*ps = &s1;
	printf("%s\n", ps->name); 
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	return 0;*/

	int answer;
	answer = fun() - fun()*fun();
	printf("%d\n", answer);
	return 0;
}