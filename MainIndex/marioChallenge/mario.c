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


//for every level (for how tall it is)
for (int i = 0; i < height; i++) {
//perform a loop of tasks
    for (int j = 0; j < height - i - 1; j++) {
        //perform an action in relationship to the loop's progress.
        //example, if we've looped twice, the perform the item 2 less times.
        

        printf(" ");
    }
    // Print hashes
    //for each loop
    for (int j = 0; j <= i; j++) {
        printf("#");
    }
    printf("\n");

}
}
