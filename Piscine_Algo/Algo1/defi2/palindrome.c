#include <stdio.h>
#include <string.h>

int is_palindrome(int start, int end, char *str)
{
    if (str[start] != str[end])
        return 0;
    else if (start == end)
        return 1;
    else
        return is_palindrome(++start, --end, str);
    return 0;
}

int main()
{
	int length = strlen;
    char str[20];
    int length,start=0,end=length-1;
    printf("kayak\n");
    fgets( str, sizeof( str ), stdin );
    length = strlen(str);

    if(is_palindrome(start,end,str))
        printf("It's a palindrome!\n");
    else
        printf("It's not a palindrome! \n");
    return 0;
}