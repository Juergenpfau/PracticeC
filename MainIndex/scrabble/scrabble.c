#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int calculateScore(string s);

int main(int argc, string argv[])


{
    int player1score = calculateScore(get_string("Player 1: pick your word\n"));
    int player2score = calculateScore(get_string("Player 2: pick your word\n"));

    if(player1score > player2score){
        printf("%s","Player 1 wins!\n");

    }
    else if(player1score< player2score){
        printf("%s", "Player 2 wins!\n");

    }
    else{
        printf("Tied game!\n");

}
}

int calculateScore(string s)
{

    int score = 0;
    string pointsList[] = {"AEILORSTUN","DG","BCMP","FVWY","K","JX","QZ"};
    // pointList[0] = 1, [1] = 2, [2] = 3, [3] = 4, [4] = 5, [6] = 8, [7] = 10
    for(int i = 0; i< strlen(s); i++)
    //iterates through the string
    {
        for(int j = 0; j<strlen(pointsList[0]); j++){
            //iterates through the single point letters
            if(toupper(s[i]) == pointsList[0][j]){
                score+=1;
            }

        }
        for(int j = 0; j<strlen(pointsList[1]); j++){
            //iterates through the single point letters
            if(toupper(s[i]) == pointsList[1][j]){
                score+=2;
            }

        }
        for(int j = 0; j<strlen(pointsList[2]); j++){
            //iterates through the single point letters
            if(toupper(s[i]) == pointsList[2][j]){
                score+=3;
            }

        }
        for(int j = 0; j<strlen(pointsList[3]); j++){
            //iterates through the single point letters
            if(toupper(s[i]) == pointsList[3][j]){
                score+=4;
            }

        }
        for(int j = 0; j<strlen(pointsList[4]); j++){
            //iterates through the single point letters
            if(toupper(s[i]) == pointsList[4][j]){
                score+=5;
            }

        }
        for(int j = 0; j<strlen(pointsList[5]); j++){
            //iterates through the single point letters
            if(toupper(s[i]) == pointsList[5][j]){
                score+=8;
            }

        }
        for(int j = 0; j<strlen(pointsList[6]); j++){
            //iterates through the single point letters
            if(toupper(s[i]) == pointsList[6][j]){
                score+=10;
            }

        }
    }
    return score;


}
