/* in this code 1. you need to create one function for measuring string length
                    you can not use strlen, return lenght
                2. create function for string concate
                    can not use strcat, return nothing
                3. create function for checking string equal or not
                    can not use strcmp, return bool value.
  */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int strLength(char*);
void strConcat(char*, char*);
bool equalString(const char*, const char*);

int main()
{
    int count =0;
    char str[100];
    char str1[50];
    char str2[50];

    printf("Enter string: \n");
    scanf("%s", str);
    strLength(str);
    printf("the length of given string is %d\n", strLength(str));

    printf("\n\nEnter streing for concate\n");
    printf("Enter str1: \n");
    scanf("%s", str1);
    printf("Enter str2: \n");
    scanf("%s", str2);
    strConcat(str1, str2);

    printf("\n\nstring equal: %d\n",equalString("Ashruti", "Ash"));
    printf("string equal: %d\n",equalString("BHargav", "BHargav"));
    
    return 0;
}

int strLength(char str[100])
{
    int count = 0;
    for (int i=0; str[i]!= '\0'; i++)
    {
        count++;
    }

    return count;
}

void strConcat(char string1[50], char string2[50])
{
    char result[100];
    int i, j;

    for (i=0; string1[i]!= '\0'; ++i)
    {
        result[i] = string1[i];
    }
    for (j=0; string2[j]!='\0'; ++j)
    {
        result[i+j] = string2[j];
    }
    result[i+j] = '\0';

    printf("result = %s\n", result);
}

bool equalString(const char s1[], const char s2[])
{
    int i=0;
    bool isEquals = false;

    while (s1[i]== s2[i] &&
           s1[i]!= '\0' &&
           s2[i]!='\0')
    ++i;

    if(s1[i] == '\0' && s2[i] == '\0')
        isEquals = true;
    else
        isEquals = false;

    return isEquals;
}


/* Output:
  Enter string: 
bhargav
the length of given string is 7


Enter streing for concate
Enter str1: 
ashruti
Enter str2: 
bhargav
result = ashrutibhargav


string equal: 0
string equal: 1
  */
