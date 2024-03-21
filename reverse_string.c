// reverse the string without using function
#include <stdio.h>
#include<string.h>
void reversestr(char *str);
int main()
{
    char str[100];
    
    printf("Enter a string : ");
    scanf("%s",str);

    reversestr(str);
    
    printf("Reversed string is : %s\n",str);
    
    return 0;
}

void reversestr(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    int i,j;
    char temp;
    
    for(i=0,j=length-1;i<j;i++,j--)
    {
        temp = str[i];
        str[i] = str [j];
        str[j] = temp;
    
    }
}
