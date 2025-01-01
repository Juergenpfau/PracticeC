#include <stdio.h>
#include <cs50.h>

int main(void)
{
//initiates the prompt from the user
    int height;
    //make sure input is valid
do{
    height = get_int("Size: ");
}
while(height>8 || height<1);

for (int i = 0; i < height; i++) {

    for (int j = 0; j < height - i - 1; j++) {
        printf(" ");
    }
    // Print hashes
    for (int j = 0; j <= i; j++) {
        printf("#");
    }
    printf("\n");

}
}
