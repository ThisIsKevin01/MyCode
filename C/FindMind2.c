#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define EASY_COUNT 10
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i <= col; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 1; i <= row; i++)
    {
        printf("%d ", i);
        for (j = 1; j <= col; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            board[i][j] = set;
        }
    }
}

void menu()
{
    printf("********************************\n");
    printf("*******      1.PLAY      *******\n");
    printf("*******      0.EXIT      *******\n");
    printf("********************************\n");
}

void InitList(int list[8], int x)
{
    int i = 0;
    for (i = 0; i < x; i++)
    {
        list[i] = 0;
    }
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
    int count = EASY_COUNT;
    while (count)
    {
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if (board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
    }
}

void count_mine_and_change(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int *win)
{
    if (show[x][y] == '*')
    {
        int count =
            mine[x - 1][y] +
            mine[x - 1][y - 1] +
            mine[x][y - 1] +
            mine[x + 1][y - 1] +
            mine[x + 1][y] +
            mine[x + 1][y + 1] +
            mine[x][y + 1] +
            mine[x - 1][y + 1] - 8 * '0';
        show[x][y] = count + '0';
        *win++;
        int list[8] = {0};     //����������Ҫ�ݹ������
        if (show[x][y] == '0') //���еݹ�
        {
            //�ĸ���Ե
            if (x == 1)
            {
                if (y == 1) //���Ͻ�
                {
                    count_mine_and_change(mine, show, x, y + 1, &win);
                    count_mine_and_change(mine, show, x + 1, y + 1, &win);
                    count_mine_and_change(mine, show, x + 1, y ,&win);
                }
                else if (y == 9) //���Ͻ�
                {
                    count_mine_and_change(mine, show, x + 1, y, &win);
                    count_mine_and_change(mine, show, x + 1, y - 1, &win);
                    count_mine_and_change(mine, show, x, y - 1, &win);
                }
                else //�ϱ�Ե
                {
                    count_mine_and_change(mine, show, x, y + 1, &win);
                    count_mine_and_change(mine, show, x + 1, y + 1, &win);
                    count_mine_and_change(mine, show, x + 1, y, &win);
                    count_mine_and_change(mine, show, x + 1, y - 1, &win);
                    count_mine_and_change(mine, show, x, y - 1, &win);
                }
            }
            else if (x == 9)
            {
                if (y == 1) //���½�
                {
                    count_mine_and_change(mine, show, x - 1, y, &win);
                    count_mine_and_change(mine, show, x - 1, y + 1, &win);
                    count_mine_and_change(mine, show, x, y + 1, &win);
                }
                else if (y == 9) //���½�
                {
                    count_mine_and_change(mine, show, x, y - 1, &win);
                    count_mine_and_change(mine, show, x - 1, y - 1, &win);
                    count_mine_and_change(mine, show, x - 1, y, &win);
                }
                else //�±�Ե
                {
                    count_mine_and_change(mine, show, x, y - 1, &win);
                    count_mine_and_change(mine, show, x - 1, y - 1, &win);
                    count_mine_and_change(mine, show, x - 1, y, &win);
                    count_mine_and_change(mine, show, x - 1, y + 1, &win);
                    count_mine_and_change(mine, show, x, y + 1, &win);
                }
            }
            else if (y == 1 && x != 1) //���Ե
            {
                count_mine_and_change(mine, show, x - 1, y, &win);
                count_mine_and_change(mine, show, x - 1, y + 1, &win);
                count_mine_and_change(mine, show, x, y + 1, &win);
                count_mine_and_change(mine, show, x + 1, y + 1, &win);
                count_mine_and_change(mine, show, x + 1, y, &win);
            }
            else if (y == 9) //�ұ�Ե
            {
                count_mine_and_change(mine, show, x + 1, y, &win);
                count_mine_and_change(mine, show, x + 1, y - 1, &win);
                count_mine_and_change(mine, show, x, y - 1, &win);
                count_mine_and_change(mine, show, x - 1, y - 1, &win);
                count_mine_and_change(mine, show, x - 1, y, &win);
            }
            else //�м䲿��
            {
                count_mine_and_change(mine, show, x - 1, y, &win);
                count_mine_and_change(mine, show, x - 1, y - 1, &win);
                count_mine_and_change(mine, show, x, y - 1, &win);
                count_mine_and_change(mine, show, x + 1, y - 1, &win);
                count_mine_and_change(mine, show, x + 1, y, &win);
                count_mine_and_change(mine, show, x + 1, y + 1, &win);
                count_mine_and_change(mine, show, x, y + 1, &win);
                count_mine_and_change(mine, show, x - 1, y + 1, &win);
            }
        }
        InitList(list, 8);
    }
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    int win = 0;
    while (win < row * col - EASY_COUNT)
    {
        printf("����������:>");
        scanf("%d%d", &x, &y);
        if (show[x][y] != '*')
        {
            printf("�õ��Ѿ���ɨ��\n");
        }
        else
        {
            if (x >= 1 && x <= row && y >= 1 && y <= col)
            {
                if (mine[x][y] == '1')
                {
                    printf("������!\n");
                    DisplayBoard(mine, row, col);
                    break;
                }
                else
                {
                    count_mine_and_change(mine, show, x, y, &win);
                    //int count = get_mine_count(mine, x, y);
                    //show[x][y] = count + '0';
                    DisplayBoard(show, row, col);
                }
            }
            else
            {
                printf("�����������������\n");
            }
        }
    }
    if (win == row * col - EASY_COUNT)
    {
        printf("���׳ɹ�\n");
        DisplayBoard(mine, row, col);
    }
}

void game()
{
    char mine[ROWS][COLS] = {0};
    char show[ROWS][COLS] = {0};
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');
    DisplayBoard(show, ROW, COL);
    SetMine(mine, ROW, COL);
    DisplayBoard(mine, ROW, COL);
    FindMine(mine, show, ROW, COL);
}

void test()
{
    int input = 0;
    srand((unsigned int)time(NULL)); //������
    do
    {
        menu();
        printf("������:>");
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
            printf("ѡ�������ѡ��!\n");
            break;
        }
    } while (input);
}

int main()
{
    test();
    return 0;
}