#include <stdio.h>
#include <conio.h>

int main()
{
    int lowercase_vowel, uppercase_vowel;
    char ch;
    scanf("%c", &ch);
    lowercase_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercase_vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (lowercase_vowel || uppercase_vowel)
    {
        printf("%c is a vowel", ch);
    }
    else
    {
        printf("%c is a consonant", ch);
    }
}