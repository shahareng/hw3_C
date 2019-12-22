#include "txtfind.h"
#include <string.h>
#include <stdio.h>

#define LINE 256
#define WORD 30

char lines[LINE];
char words[WORD];

int getLine(char s[])
{
   int count = 0;
   int i=0;
    while (s[i] != '\0' || count < LINE)
    {
        lines[i] = s[i];
        count++;
        i++;
    }
    lines[i] = '\0';
    return count;
}

int getWord(char w[])
{
    int count = 0;
    int i=0;
    while (w[i] != '\t' || w[i] != '\n' || w[i] != '\0' || count < WORD)
    {
        words[i] = w[i];
        count++;
        i++;
    }
    words[i] = '\0';
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
    char temp [] = "";
    while (!EOF)
    {
        getLine(temp);
        if(substring(lines, str) == 1)
        {
            printf("%s\n", lines);
        }
    }
}

void print_similar_words(char * str)
{
    char temp [] = "";
    while (!EOF)
    {
        getWord(temp);
        if(similar(words, str, 1) == 1)
        {
            printf("%s\n", words);
        }
    }
}

int main()
{
    char temp [] = "";
    char search [WORD];
    char op[1];
    int count = 0;
    int i=0;
    count = getWord(temp);
    while (i < count)
    {
        search[i] = words[i];
    }
    count = getWord(temp);
    while (i < count)
    {
        op[i] = words[i];
    }
    if (strcmp(op,"a"))
    {
       print_lines(search);
    }
     else {
       print_similar_words(search);
    }
    return 0;
}

