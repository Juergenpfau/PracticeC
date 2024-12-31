#include <stdio.h>
#include <cs50.h>
//This is an interesting example in C to demonstrate that Strings "end" so to speak when they reach nul
//However, since memory is allocated in RAM, you can access indices beyond your "variable, and you can take
//for example, the string "b" only using variable a.

int main(void)
{
    string a = "HI!";
    string b = "BYE!";

    printf("%c%c%c%c%s",a[4],a[5],a[6],a[7],"\n");

}
