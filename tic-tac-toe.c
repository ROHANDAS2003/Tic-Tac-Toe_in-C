#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

char board[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void printBoard()
{
    system("CLS");
    printf("\n\n");
    printf("====: TIC TAC TOE :====\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[1], board[2], board[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[4], board[5], board[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[7], board[8], board[9]);
    printf("     |     |     \n");
    printf("\n\n");
}

void main()
{
    int player = 1, input, status = -1;
    printBoard();

    while (status==-1)
    {
        player = (player%2 == 0) ? 2 : 1;
        char mark = (player == 1) ? 'X' : 'O';

        printf("Enter number for player %d:  ", player);
        scanf("%d", &input);

        if (input < 1 || input > 9)
        {
            printf("Invalid input\n");
        }
            board[input] = mark;
        printBoard();
        player++;
    }
}
