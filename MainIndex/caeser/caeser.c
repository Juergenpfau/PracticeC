#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


string caeser(int x);
bool isnum(char array[]);

int main(int argc, char *argv[])

{


    if (argc != 2 || !isnum(argv[1]) || atoi(argv[1]) < 0)
    {
        printf("failed");
        return 1;
    }
    else{
        caeser(atoi(argv[1]));

    }

}

//Below are the created functions which cypher and determine whether or not the entire argument is an integer.

//#################################################################################################
string caeser(int x)
{
    if(x >26){
        printf("pick a number 1-26\n");
        return "2";
    }
    else{
            string text = get_string("\nPlaintext: ");
//take a plaintext input
    for(int i = 0; i<strlen(text); i++)
    //go through each letter
    {
        //set each letter to uppercase
        text[i] = toupper(text[i]);

        int charnum = (int)text[i];
        int shiftedchar = charnum + x;
        if((char)shiftedchar>'Z')
        {
            shiftedchar = shiftedchar -26;
            text[i] = (char)shiftedchar;
        }
        else{
            text[i] = (char)shiftedchar;
        }


//A-Z = 65-90


    }
        printf("The cyphered output is: %s%s",text,"\n");
        return text;


    }



    // if (shifted_char > 'Z') {
    // shifted_char = shifted_char - 26;

    //take an integer which is a key (any number)
    //take a text which needs to be rotated
    //shift the letter in the alphabet by the integer provided
    //if number provided is greater than 26, then reloop from 0. So, my bounds
    //are 0-26.
}

bool isnum(char array[])
{
    int i = 0;
    //counter
    while(array[i] != '\0')
    {//while not at the end of the string

        if(!isdigit(array[i])){
            //if is not a digit, return false
            return false;
        }
        //go to the next number
        i++;
        }
        //if all are digits, return true!
    return true;

    }
