#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int i,vowel,consonant,digit,other;
    int word=1;
    i=vowel=consonant=digit=other=0;
    printf("Enter a string = ");
    fgets(string,sizeof(string),stdin);
    while(string[i]!='\0')
    {
        if(string[i]=='a'|| string[i]=='e'|| string[i]=='i'|| string[i]=='o'|| string[i]=='u'|| string[i]=='A'|| string[i]=='E'||
           string[i]=='I'|| string[i]=='O'|| string[i]=='U')
            vowel++;
        else if(string[i]>='A' && string[i]<='Z' || string[i]>='a' && string[i]<='z')
            consonant++;
        else if(string[i]>='0' && string[i]<='9')
            digit++;
        else if(string[i]==' ')
            word++;
        else
            other++;
        i++;
    }
    printf("Number of vowels = %d\n",vowel);
    printf("Number of consonants = %d\n",consonant);
    printf("Number of digits = %d\n",digit);
    printf("Number of words = %d\n",word);
    printf("Number of other characters = %d\n",other);

    return 0;
}
