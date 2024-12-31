#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int readability(string s);

int main(int argc, string argv[])
{
    string score = get_string("Pick a sentence");
    printf("%i",readability(score));
}

int readability(string s)
{
    int letters = 0;
    int words = 1;
    int sentences = 0;


    //index = 0.0588 * L - 0.296 * S - 15.8
    //where L is the average number of letters per 100 words in the text,
    //and S is the average number of sentences per 100 words in the text.
for(int i = 0; i<strlen(s);i++)
{


    if(ispunct(s[i])&&s[i]!=','&&s[i]!='\'')
    {
        sentences+=1;
    }
    if(isspace(s[i]))
    {
        words+=1;
    }
    if(!isspace(s[i]) && !ispunct(s[i]))
    {
        letters+=1;
    }

}
float L = ((float) letters / words) * 100.0;
float S = ((float) sentences / words) * 100.0;
float index = 0.0588 * L - 0.296 * S - 15.8;
return index;
}
