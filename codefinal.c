#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validinput (char s[])
{
        for (int i = 0; i < strlen(s); i++)
                if (!isalpha(s[i]) && !isspace(s[i]))
                        return 0;
        return 1;
}
void palindromes(char *str)
{
int i, length;
printf("Enter a word: ");
length = strlen(str);
printf("string length = %d\n",length);
printf("Reversed string: ");
int counter = 0;
char strrev[50];
for(i=length-1; i>=0; i--)
{
  strrev[counter]=str[i];
  printf("%c",strrev[counter]);
  counter++;
}

if (*str == *strrev)
{
  printf("\nEntered strings (words) are palindromes\n");
}
else
{
  printf("\nEntered strings (words) are not palindromes\n");
}
}

void main()
{
        char str[50];
        int i,vow=0,cons=0;
	printf("Enter a word:");
        scanf("%[^\n]s",str);
	if (validinput(str))
	{
                printf("\nThe given word is %s\n",str);

                for (i = 0; i < strlen(str); i++)
                        if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O'|| str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
                        {
                                vow++;}
                        else if (str[i]==' ')
                        {
                                vow = vow;cons=cons;}
                        else cons++;
                printf("\nThe total number of vowels is %d",vow);
                printf("\nThe total number of consonants is %d\n",cons);
		palindromes(str);        
	}
        else
        {
                printf("Please enter a valid input.\n");
        }
        return;
}


