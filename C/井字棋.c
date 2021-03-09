#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COL 3
#define ROW 3
void menu()
{
    printf("******************************\n");
    printf("********   1.PLAY   **********\n");
    printf("********   0.EXIT   **********\n");
    printf("******************************\n");
}

void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        //printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                printf("---");
                if (j < col - 1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("�����(*)\n");
    printf("��������:>");
    while (1)
    {
        scanf("%d%d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("�����걻ռ��");
            }
        }
        else
        {
            printf("�������,��������");
        }
    }
    printf("������������\n");
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("������(#)\n");
    printf("������������\n");
    x = rand() % row;
    y = rand() % col;
    while (1)
    {
        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}

int IsFull(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }

    }
    return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][1];
        }
    }
    for (i = 0; i < col; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
        {
            return board[1][i];
        }

    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if (1 == IsFull(board, ROW, COL))
    {
        return 'Q';
    }
    return 'C';
}

void game()
{
    char ret = 0;
    char board[ROW][COL] = {0};
    InitBoard(board, ROW, COL);
    DisplayBoard(board, ROW, COL);
    while (1)
    {
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
        {
            break;
        }
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        IsWin(board, ROW, COL);
        if (ret != 'C')
        {
            break;
        }
    }
    if (ret == '*')
    {
        printf("���ʤ��\n");
    }
    else if (ret == '#')
    {
        printf("����ʤ��\n");
    }
    else
    {
        printf("ƽ��\n");
    }
}

void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("��ѡ��:");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ���������ѡ��\n");
            break;
        }
    } while (input);
}

int main()
{
    test();
    return 0;
}