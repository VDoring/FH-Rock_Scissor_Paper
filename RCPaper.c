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
		printf("����� ������ �����Դϱ�?\n\n1.��\t2.��\t3.��\n");
		printf("�߷��Ϸ��� 99�Է�\n");
		scanf("%d", &player);

		if (computer == player) {
			printf("�����ϴ�!");
		}
		if (computer < player && player < Paper) {
			printf("\n��ǻ�ʹ� ��, ����� � �½��ϴ�.\n");
			printf("[result] : ����� �й�");
		}
		if (computer < player && computer == player - 1) {
			printf("\n��ǻ�ʹ� ��, ����� ���� �½��ϴ�.\n");
			printf("[result] : ����� �й�");
		}
		if (computer > player && player == computer - 2) {
			printf("\n��ǻ�ʹ� ��, ����� ���� �½��ϴ� .\n");
			printf("[result] : ����� �й�");
		}
		if (computer < player && computer == player - 2) {
			printf("\n��ǻ�ʹ� ��, ����� ���� �½��ϴ�.\n");
			printf("[result] : ����� �¸�");
		}
		if (computer > player && player == computer - 1) {
			printf("\n��ǻ�ʹ� ��, ����� ���� �½��ϴ�.\n");
			printf("[result] : ����� �¸�");
		}
		if (computer > player && player < Rock) {
			printf("\n��ǻ�ʹ� ��, ����� � �½��ϴ�.\n");
			printf("[result] : ����� �¸�");
		}
	}
	if (First == 2) {
		printf("���α׷��� �����մϴ�!");
	}
}*/




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void Computer_random(int *Computer);

/*
1.�� 2.�� 3.��

[WIN]
�� > �� 1 > 2
�� > �� 3 > 1
�� > �� 2 > 3
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
		while (1) { //��ǻ�� ������ ����
			Computer = rand() % 4;
			if (!Computer) {
				Computer = rand() % 4;
			}
			else break;
		}

		if (User == 1) {
			if (User < Computer && Computer != 3) {//1 > 2. �� > ��
				printf("User Wins!\nComputer : %d\n\n", Computer);
				system("pause");
				system("cls");
				continue;
			}
			else if (User < Computer && Computer == 3) {//1 < 3. �� < ��
				printf("Computer Wins!\nComputer : %d\n\n", Computer);
				system("pause");
				system("cls");
				continue;
			}

		}
		if (User == 2) {
			if (User < Computer && User != 1) {//2 > 3. �� > ��
				printf("User Wins!\nComputer : %d\n\n", Computer);
				system("pause");
				system("cls");
				continue;
			}
			else if (User > Computer) {// 2 < 1. �� < ��
				printf("Computer Wins!\nComputer : %d\n\n", Computer);
				system("pause");
				system("cls");
				continue;
			}

		}
		if (User == 3) {
			if (Computer == 1) {//3 > 1. �� > ��
				printf("User Wins!\nComputer : %d\n\n", Computer);
				system("pause");
				system("cls");
				continue;
			}
			else if (Computer == 2) {//3 < 2. �� < ��
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

	while (1) { //��ǻ�� ������ ����
		*temp_Computer = rand() % 4;
		if (!*temp_Computer) {
			*temp_Computer = rand() % 4;
		}
		else break;
	}
}*/