#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	FILE* fp;
	fp = fopen("file1.txt","r+");
	char s[90] = {0};
	fread(s,1,90,fp);
	printf("%s", s);

	return 0;
}