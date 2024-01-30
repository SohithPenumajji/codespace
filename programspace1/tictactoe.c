#include <stdio.h>
#include <stdlib.h>

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;

int checkForWin();
void DisplayBoard();
void MarkBoard(char mark);

int main() {
    int GameStatus;
    char Mark;

    player = 1;

    do {
        DisplayBoard();

        // change turns
        player = (player % 2) ? 1 : 2;

        // get input
        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);

        // set the correct character based on player turn
        Mark = (player == 1) ? 'X' : 'O';

        // set the board on user choice or invalid choice
        MarkBoard(Mark);

        GameStatus = checkForWin();

        player++;
    } while (GameStatus == -1);

    return 0;
}

int checkForWin() {
    int returnValue = 0;

    if (square[1] == square[2] && square[2] == square[3]) {
        returnValue = 1;
    } else if (square[4] == square[5] && square[5] == square[6]) {
        returnValue = 1;
    } else if (square[7] == square[8] && square[8] == square[9]) {
        returnValue = 1;
    } else if (square[1] == square[4] && square[4] == square[7]) {
        returnValue = 1;
    } else if (square[2] == square[5] && square[5] == square[8]) {
        returnValue = 1;
    } else if (square[3] == square[6] && square[6] == square[9]) {
        returnValue = 1;
    } else if (square[1] == square[5] && square[5] == square[9]) {
        returnValue = 1;
    } else if (square[3] == square[5] && square[5] == square[7]) {
        returnValue = 1;
    } else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
               square[4] != '4' && square[5] != '5' && square[6] != '6' &&
               square[7] != '7' && square[8] != '8' && square[9] != '9') {
        returnValue = 0;
    } else {
        returnValue = -1;
    }

    return returnValue;
}

void DisplayBoard() {
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
    printf("    |    |    \n");
    printf(" %c  |  %c |  %c\n", square[1], square[2], square[3]);
    printf("___|___|___\n");
    printf(" %c  |  %c |  %c \n", square[4], square[5], square[6]);
    printf("___|___|___\n");
    printf(" %c  |  %c |  %c \n", square[7], square[8], square[9]);
    printf("   |    |   \n\n");
}

void MarkBoard(char mark) {
    if (choice == 1 && square[1] == '1')
        square[1] = mark;
    else if (choice == 2 && square[2] == '2')
        square[2] = mark;
    else if (choice == 3 && square[3] == '3')
        square[3] = mark;
    else if (choice == 4 && square[4] == '4')
        square[4] = mark;
    else if (choice == 5 && square[5] == '5')
        square[5] = mark;
    else if (choice == 6 && square[6] == '6')
        square[6] = mark;
    else if (choice == 7 && square[7] == '7')
        square[7] = mark;
    else if (choice == 8 && square[8] == '8')
        square[8] = mark;
    else {
        printf("Invalid Move ");
        player--;
    }
}
