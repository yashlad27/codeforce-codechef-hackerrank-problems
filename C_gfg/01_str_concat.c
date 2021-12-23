#include<stdio.h>
#include<string.h>

int main()
{
    char s2[50] = "GFG";
    char s1[50] = "courses";    
    strcat(s2, s1);

    printf("%s", s2);
    return 0;
}