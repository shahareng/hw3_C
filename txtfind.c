#include <stdio.h>

#define LINE 256
#define WORD 30

int getLine(char s[])
{
   int count = 0;
   char c;
    while (scanf("%c",&c)!='\n')
    {
        s[count] = c;
        count++;
    }
    s[count] = '\0';
    return count;
}

int getWord(char w[])
{
    int count = 0;
    char c;
    while (w[i] != '\t' || w[i] != '\n' || w[i] != ' ')
    {
        w[count] = c;
        count++;+
    }
    w[count] = '\0';
    return count;
}

int substring(char * str1, char * str2)
{
    // check if str2 contain in str1
    int i=0; int j=0; int count=0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    while (i != len1)
    {
        while (j != len2)
        {

           if(*(str2+j) == *(str1+i))
           {
               i++;
               j++;
               count++;
           }
           else
           {
                j=0;
                count=0;
           }
        }
        if (count == len2)
        {
            return 1;
        }
    }
    return 0;
}

int similar (char *s, char *t, int n)
{
    int i=0; int j=0;
    int lenS = strlen(s);
    int lenT = strlen(t);
    if((lenS - lenT) != n)
    {
        return 0;
    }
    while (i != lenS)
    {
        while (j != lenT && n>=0)
        {

           if(*(s+i) == *(t+j))
           {
               i++;
               j++;
           }
           else
           {
               n=n-1;
               i++;
           }
        }
    }
    if (n>=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void print_lines(char * str)
{
    char s[LINE] = "";
    while (!EOF)
    {
        getLine(s);
        char *str1 = s;
        if(substring(str1, str) == 1)
        {
            printf("%s\n", s);
        }
    }
}

void print_similar_words(char * str)
{
    char w[WORD] = "";
    while (!EOF)
    {
        getWord(w);
        char *str1 = w;
        if(similar(str1, str, 1) == 1)
        {
            printf("%s\n", w);
        }
    }
}

int main()
{
    char searchW [WORD];
    char *search = searchW;
    getWord(searchW);
    char op[WORD];
    getWord(op);
    if (op[0] == 'a')
    {
       print_lines(search);
    }
    else
    {
       print_similar_words(search);
    }
}

