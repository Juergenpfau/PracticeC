#include <stdio.h>
#include <cs50.h>
void meow(void);

int main(void)
{
    meow();
}

void meow(void)
{
    int r = get_int("How many times did the cat meow? \n");

    for(int i = 0; i < r; i++)
    {
        printf("Meow\n");
    }
}
