#include<stdio.h>
#include<string.h>
int main()
{
    char s[300];
    printf("Enter the string? ");
    gets(s);
    printf("You entered %s",s);

    int n = strlen(s);
    printf("\nLength of string is: %d",n);
    int count = 0 ;
    int i = 0;
    while( i <= n)
    {
        if(s[i]== 'a' || s[i] == 'e' || s[i] == 'i' || s[i]=='o' || s[i]=='u')
        {
            count++;
        }
        i++;
    }
    printf("\nnumber of vowel are : %d",count);
}
