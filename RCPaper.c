/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int First;
	printf("Welcome to HDR's Rock Scissor Paper Game!\n");
	printf("1. START!\t2. Quit\n");
	scanf("%d", &First);

	if (First == 1) {
		int Rock = 0, Scissor = 1, Paper = 2;
		int player = 0, computer = 0, random;

		computer = 2;
		printf("당신은 무엇을 낼것입니까?\n\n1.묵\t2.찌\t3.빠\n");
		printf("중료하려면 99입력\n");
		scanf("%d", &player);

		if (computer == player) {
			printf("비겼습니다!");
		}
		if (computer < player && player < Paper) {
			printf("\n컴퓨터는 묵, 당신은 찌를 냈습니다.\n");
			printf("[result] : 당신의 패배");
		}
		if (computer < player && computer == player - 1) {
			printf("\n컴퓨터는 찌, 당신은 빠를 냈습니다.\n");
			printf("[result] : 당신의 패배");
		}
		if (computer > player && player == computer - 2) {
			printf("\n컴퓨터는 빠, 당신은 묵을 냈습니다 .\n");
			printf("[result] : 당신의 패배");
		}
		if (computer < player && computer == player - 2) {
			printf("\n컴퓨터는 묵, 당신은 빠를 냈습니다.\n");
			printf("[result] : 당신의 승리");
		}
		if (computer > player && player == computer - 1) {
			printf("\n컴퓨터는 찌, 당신은 묵을 냈습니다.\n");
			printf("[result] : 당신의 승리");
		}
		if (computer > player && player < Rock) {
			printf("\n컴퓨터는 빠, 당신은 찌를 냈습니다.\n");
			printf("[result] : 당신의 승리");
		}
	}
	if (First == 2) {
		printf("프로그램을 종료합니다!");
	}
}*/




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void Computer_random(int *Computer);

/*
1.묵 2.찌 3.빠

[WIN]
묵 > 찌 1 > 2
빠 > 묵 3 > 1
찌 > 빠 2 > 3
*/

int main() {
	int User;
	int Computer;

	while (1) {
		printf("VDoring's RCP Games\n\n");
		printf("Select your hands.\n");
		printf("[1]Rock\t[2]Scissors\t[3]Paper\n=");
		scanf("%d", &User);

		//Computer_random(&Computer);
		srand((unsigned)time(NULL));
		while (1) { //컴퓨터 랜덤수 고르기
			Computer = rand() % 4;
			if (!Computer) {
				Computer = rand() % 4;
			}
			else break;
		}

		if (User == 1) {
			if (User < Computer && Computer != 3) {//1 > 2. 묵 > 찌
				printf("User Wins!\nComputer : %d\n\n", Computer);
				system("pause");
				system("cls");
				continue;
			}
			else if (User < Computer && Computer == 3) {//1 < 3. 묵 < 빠
				printf("Computer Wins!\nComputer : %d\n\n", Computer);
				system("pause");
				system("cls");
				continue;
			}

		}
		if (User == 2) {
			if (User < Computer && User != 1) {//2 > 3. 찌 > 빠
				printf("User Wins!\nComputer : %d\n\n", Computer);
				system("pause");
				system("cls");
				continue;
			}
			else if (User > Computer) {// 2 < 1. 찌 < 묵
				printf("Computer Wins!\nComputer : %d\n\n", Computer);
				system("pause");
				system("cls");
				continue;
			}

		}
		if (User == 3) {
			if (Computer == 1) {//3 > 1. 빠 > 묵
				printf("User Wins!\nComputer : %d\n\n", Computer);
				system("pause");
				system("cls");
				continue;
			}
			else if (Computer == 2) {//3 < 2. 빠 < 찌
				printf("Computer Wins!\nComputer : %d\n\n", Computer);
				system("pause");
				system("cls");
				continue;
			}
		}
		if (User == Computer) {
			printf("DRAW!\nComputer : %d\n\n", Computer);
			system("pause");
			system("cls");
			continue;
		}
	}
}


/*
void Computer_random(int *Computer) {
	srand((unsigned)time(NULL));
	int *temp_Computer = &Computer;

	while (1) { //컴퓨터 랜덤수 고르기
		*temp_Computer = rand() % 4;
		if (!*temp_Computer) {
			*temp_Computer = rand() % 4;
		}
		else break;
	}
}*/