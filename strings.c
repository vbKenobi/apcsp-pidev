#include <stdio.h>

#include <string.h>


int main()

{

char str1[27] = "";

char str2[] = "abcdefghijklmnopqrstuvwxyz";

char str3[] = "";

int i;

for (i = 0; i <= 25; i++)
        str1[i] = 'a' + i;

str1[26] = '\0';
str2[26] = '\0';
str3[54] = '\0';
printf("This is string 1 (this was made using a loop): %s \n", str1);

printf("This is string 2: %s \n", str2);

if(strcmp(str1, str2)==0)

{
printf("\n Both string 1 and string 2 are the same \n");
    }

int j;

for (j=0; j <= 25; j++)
	str2[j] = str2[j] - 32;

printf("String 2 is now uppercase: %s \n", str2);

if(strcmp(str1, str2)==0)

{ printf("\nBoth string 1 and string 2 are the same \n");
    }
else { printf("String 1 and string 2 are different \n");
}
strcpy (str3, str1);
strcat (str3, str2);
printf("The two strings have been concatenated into str3 as follows:%s \n", str3);
}
