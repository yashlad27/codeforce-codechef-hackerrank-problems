#include<stdio.h>
#include<string.h>

// pattern searching in c-language

void search_pattern(char* p, char* s)
{
    int m=strlen(p);
    int n=strlen(s);

    for(int i=0; i<=n-m; i++)
    {
        int j;
        int a=i;
        for(j=0; j<m; j++)
        {
            if(s[a]!=p[j])
            {
                break;
                a++;
            }
        }
        if(j==m)
        {
            printf("Pattern found at index %d\n",i);
        }

    }
}
int main()
{
    char s[] = "ABBSBBCJWBCHSAKNSJSBCBCBCBCEBCEABBAAABABABBBBABBABABAABBABBA";
    char p[] = "AABA";
    search_pattern(p,s);

    return 0;
}