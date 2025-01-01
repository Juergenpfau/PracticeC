#include <stdio.h>
#include <cs50.h>


int main(void)
{
int a;
do{
    a = get_int("Range");
}
while(a>100 || a<0);

for(int i = 0; i<a+1; i++){
    if(i == 1){
        printf("%i\n", i);
    }
    else if(i == 2){
        printf("%i\n", i);
    }

    else if(i%2!=2){
        printf("%i\n", i);

    }
}






}
