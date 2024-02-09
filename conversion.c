#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001] ;
    gets(s) ;
    //int len = strlen(s) ;
    int upper = strupr(s) ;
    int lower = strlwr(s) ;
    printf("%s" , s) ;


    return 0 ;
}
