#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include"game.h"
void menu()
{
	printf("*************************\n");
	printf("********1.play***********\n");
	printf("********0.exit***********\n");
	printf("*************************\n");
}
void game()
{
	//储存二维数组
	char board[ROW][COL];
	//初始化二维数组
	Initboard(board, ROW, COL);
	DisplayBoard(board,ROW, COL);
	PlayerMove(board,ROW,COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	}
}
int main()
{
	int input;
	do
	{
		menu();
		printf("请选择:>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}