#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char str1[1000] , str2[1000];
    gets(str1);
    gets(str2);

    int len1 , len2;
    len1 = strlen(str1);
    len2 = strlen(str2);
    cout<< len1 << " " << len2 << endl;
    cout<< str1 << " " << str2;
    return 0;
}
