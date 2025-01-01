#include <stdio.h>
#include <cs50.h>

int main(void)
{

int n = 0;
string name = get_string("What is your name? \n");

while(name[n] != '\0')
{

    printf("%i", n);
    n+=1;
}
return n;


}
