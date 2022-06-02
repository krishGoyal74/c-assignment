
#include <stdio.h>
int main()
{
    // find number is positive negative or zero
    char a;
    printf("enter character");
    scanf("%c",&a);
    switch(a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
                printf("vowel");
                break;
        
        default:
        printf("consonant");
        
    }
    return 0;
}
