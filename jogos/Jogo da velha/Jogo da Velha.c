#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int cont = 0;

struct JogoVelha{
	int jogador,jogadas,escolhamenu,escolhanivel;
	char tabuleiro[3][3];
};

void menuprincipal(struct JogoVelha *j){
	printf("     __  _____  ______  _____    _____   ______    __   __  _____  __      __   _  ______ \n");
	printf("    |  ||     ||   ___||     |  |     | |   _  |  |  | |  ||  ___||  |    |  | | ||  _   |\n");
	printf("    |  ||  _  ||  |    |  _  |  |  _   ||  |_| |  |  |_|  || |___ |  |    |  |_| || |_|  |\n");
	printf(" _  |  || |_| ||  | __ | |_| |  | |_|  ||      |  |       ||  ___||  |    |      ||      |\n");
	printf("| |_|  ||     ||  |_| ||     |  |      ||   _  |   |     | | |___ |  |___ |   _  ||  _   |\n");
	printf("|______||_____||______||_____|  |_____| |__| |_|    |___|  |_____||______||__| |_||_| |__|\n\n\n");
	printf("[1] - Multijogador # \n\n");
	printf("[2] - Contra PC # \n\n");
	printf("   Digite o modo de Jogo que deseja jogar: ");
	scanf("%d",&j->escolhamenu);
}

void criatabu(struct JogoVelha *j){
	int a,b;
	char valor = '1';
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			j->tabuleiro[a][b] = valor;
			valor++;
		}
	}
}

void vencedor(int win,int escolha){
	if(escolha == 1){
		printf("\n\t\t  ****** JOGADOR %d VENCEU! *****\n\n\n",win);
		Sleep(2000);
		system("cls");
		system("color af");
		printf("\n\n\n\n\t\t\t\t     ****** JOGADOR %d VENCEU! *****\n\n\n",win);
		printf("\t\t                                                          \n");
		printf("\t\t          ###       ####       ###   ###    ####      ### \n");
		printf("\t\t          ###      ######      ###   ###    #####     ### \n");
		printf("\t\t           ###    ###  ###    ###    ###    ### ###   ### \n");
		printf("\t\t           ###    ###  ###    ###    ###    ###  ###  ### \n");
		printf("\t\t            ###   ###   ###  ###     ###    ###   ### ### \n");
		printf("\t\t            ###  ###     ### ###     ###    ###     ##### \n");
		printf("\t\t             ######       #####      ###    ###      #### \n");
		printf("\t\t                                                          \n");
		printf("\n\n\n\t\t\t\t   Jogo by:   Jayme Augusto\n\n\n\n\n\n\n\n");
		system("pause");
		system("cls");
		main();
	}else{
		if(win==1){
			printf("\n\n\t\t  ****** JOGADOR %d VENCEU! *****\n\n\n",win);
			Sleep(2000);
			system("cls");
			system("color af");
			printf("\n\n\n\n\t\t\t\t     ****** JOGADOR %d VENCEU! *****\n\n\n",win);
			printf("\t\t                                                          \n");
			printf("\t\t          ###       ####       ###   ###    ####      ### \n");
			printf("\t\t          ###      ######      ###   ###    #####     ### \n");
			printf("\t\t           ###    ###  ###    ###    ###    ### ###   ### \n");
			printf("\t\t           ###    ###  ###    ###    ###    ###  ###  ### \n");
			printf("\t\t            ###   ###   ###  ###     ###    ###   ### ### \n");
			printf("\t\t            ###  ###     ### ###     ###    ###     ##### \n");
			printf("\t\t             ######       #####      ###    ###      #### \n");
			printf("\t\t                                                          \n");
			printf("\n\n\n\t\t\t\t   Jogo by:   Jayme Augusto\n\n\n\n\n\n\n\n");
			system("pause");
			system("cls");
			main();
		}else{
			printf("\n\n\n\t\t  ****** VOCE PERDEU *****\n\n\n");
			Sleep(2000);
			system("cls");
			system("color ce");
			printf("\n\n\n\n\t\t\t\t     ****** VOCE PERDEU *****\n\n\n",win);
			printf("\t\t                                                    \n");
			printf("\t\t          ##       ########   #######  ########  \n");
			printf("\t\t          ##       ###  ###   ##   ##  ##        \n");
			printf("\t\t          ##       ###  ###   ##       ##        \n");
			printf("\t\t          ##       ###  ###   #######  ########  \n");
			printf("\t\t          ##       ###  ###        ##  ##        \n");
			printf("\t\t          ##       ###  ###   ##   ##  ##        \n");
			printf("\t\t          #######  ########   #######  ########  \n");
			printf("\t\t                                                 \n");
			printf("\n\n\n\t\t\t\t   Jogo by:   Jayme Augusto\n\n\n\n\n\n\n\n");
			system("pause");
			system("cls");
			main();
		}
	}
	
}

void menu(struct JogoVelha *j){
	system("cls");
	printf("\n\n ###################################\n");
	printf(" ########## JOGO DA VELHA ##########       partidas Jogadas: | %d |\n",cont);
	printf(" ###################################\n\n");
}

void verifica(struct JogoVelha *j){
	char op;
	if(j->jogador == 1) op = 'X';
	if(j->jogador == 2) op = 'O';
	if(j->tabuleiro[0][0] == op && j->tabuleiro[0][1] == op && j->tabuleiro[0][2] == op) vencedor(j->jogador,j->escolhamenu);
	if(j->tabuleiro[1][0] == op && j->tabuleiro[1][1] == op && j->tabuleiro[1][2] == op) vencedor(j->jogador,j->escolhamenu);
	if(j->tabuleiro[2][0] == op && j->tabuleiro[2][1] == op && j->tabuleiro[2][2] == op) vencedor(j->jogador,j->escolhamenu);
	if(j->tabuleiro[0][0] == op && j->tabuleiro[1][0] == op && j->tabuleiro[2][0] == op) vencedor(j->jogador,j->escolhamenu);
	if(j->tabuleiro[0][1] == op && j->tabuleiro[1][1] == op && j->tabuleiro[2][1] == op) vencedor(j->jogador,j->escolhamenu);
	if(j->tabuleiro[0][2] == op && j->tabuleiro[1][2] == op && j->tabuleiro[2][2] == op) vencedor(j->jogador,j->escolhamenu);
	if(j->tabuleiro[0][0] == op && j->tabuleiro[1][1] == op && j->tabuleiro[2][2] == op) vencedor(j->jogador,j->escolhamenu);
	if(j->tabuleiro[0][2] == op && j->tabuleiro[1][1] == op && j->tabuleiro[2][0] == op) vencedor(j->jogador,j->escolhamenu);
	if(j->jogadas == 9){
		system("cls");
		system("color ce");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t############### DEU VELHA ###############\n\n\n\n\n\n\n\n\n\n\n");
		system("pause");
		system("cls");
		main();
	}
}

void jogando (struct JogoVelha *j, int posicao){
	
	switch (posicao){
		case 1:
			if(j->tabuleiro[0][0]=='X'||j->tabuleiro[0][0]=='O') break;
			j->jogadas++;
			if(j->jogador == 1){
				j->tabuleiro[0][0] = 'X';
			}else{
				j->tabuleiro[0][0] = 'O';
			}
		break;
		case 2:
			if(j->tabuleiro[0][1]=='X'||j->tabuleiro[0][1]=='O') break;
			j->jogadas++;
			if(j->jogador == 1){
				j->tabuleiro[0][1] = 'X';
			}else{
				j->tabuleiro[0][1] = 'O';
			}
		break;
		case 3:
			if(j->tabuleiro[0][2]=='X'||j->tabuleiro[0][2]=='O') break;
			j->jogadas++;
			if(j->jogador == 1){
				j->tabuleiro[0][2] = 'X';
			}else{
				j->tabuleiro[0][2] = 'O';
			}
		break;
		case 4:
			if(j->tabuleiro[1][0]=='X'||j->tabuleiro[1][0]=='O') break;
			j->jogadas++;
			if(j->jogador == 1){
				j->tabuleiro[1][0] = 'X';
			}else{
				j->tabuleiro[1][0] = 'O';
			}
		break;
		case 5:
			if(j->tabuleiro[1][1]=='X'||j->tabuleiro[1][1]=='O') break;
			j->jogadas++;
			if(j->jogador == 1){
				j->tabuleiro[1][1] = 'X';
			}else{
				j->tabuleiro[1][1] = 'O';
			}
		break;
		case 6:
			if(j->tabuleiro[1][2]=='X'||j->tabuleiro[1][2]=='O') break;
			j->jogadas++;
			if(j->jogador == 1){
				j->tabuleiro[1][2] = 'X';
			}else{
				j->tabuleiro[1][2] = 'O';
			}
		break;
		case 7:
			if(j->tabuleiro[2][0]=='X'||j->tabuleiro[2][0]=='O') break;
			j->jogadas++;
			if(j->jogador == 1){
				j->tabuleiro[2][0] = 'X';
			}else{
				j->tabuleiro[2][0] = 'O';
			}
		break;
		case 8:
			if(j->tabuleiro[2][1]=='X'||j->tabuleiro[2][1]=='O') break;
			j->jogadas++;
			if(j->jogador == 1){
				j->tabuleiro[2][1] = 'X';
			}else{
				j->tabuleiro[2][1] = 'O';
			}
		break;
		case 9:
			if(j->tabuleiro[2][2]=='X'||j->tabuleiro[2][2]=='O') break;
			j->jogadas++;
			if(j->jogador == 1){
				j->tabuleiro[2][2] = 'X';
			}else{
				j->tabuleiro[2][2] = 'O';
			}
		break;
		default :
 		   printf ("\n\t ** Valor invalido! **\n");
 		   Sleep(1000);
	}
}

void mostratabu(struct JogoVelha *j){
	int a,b;
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("\t | %c |",j->tabuleiro[a][b]);
		}
		if(a!=2) printf("\n\t-----------------------\n");
	}
}

int inteligencia(struct JogoVelha *j){
	int cp;
	if(j->escolhanivel == 2){
		if(j->tabuleiro[0][0]=='O' && j->tabuleiro[0][1]=='O' && j->tabuleiro[0][2]=='3') return 3;
		if(j->tabuleiro[1][0]=='O' && j->tabuleiro[1][1]=='O' && j->tabuleiro[1][2]=='6') return 6;
		if(j->tabuleiro[2][0]=='O' && j->tabuleiro[2][1]=='O' && j->tabuleiro[2][2]=='9') return 9;
		if(j->tabuleiro[0][0]=='O' && j->tabuleiro[0][2]=='O' && j->tabuleiro[0][1]=='2') return 2;
		if(j->tabuleiro[1][0]=='O' && j->tabuleiro[1][2]=='O' && j->tabuleiro[1][1]=='5') return 5;
		if(j->tabuleiro[2][0]=='O' && j->tabuleiro[2][2]=='O' && j->tabuleiro[2][1]=='8') return 8;
		if(j->tabuleiro[0][1]=='O' && j->tabuleiro[0][2]=='O' && j->tabuleiro[0][0]=='1') return 1;
		if(j->tabuleiro[1][1]=='O' && j->tabuleiro[1][2]=='O' && j->tabuleiro[1][0]=='4') return 4;
		if(j->tabuleiro[2][1]=='O' && j->tabuleiro[2][2]=='O' && j->tabuleiro[2][0]=='7') return 7;
		if(j->tabuleiro[0][0]=='O' && j->tabuleiro[1][0]=='O' && j->tabuleiro[2][0]=='7') return 7;
		if(j->tabuleiro[0][1]=='O' && j->tabuleiro[1][1]=='O' && j->tabuleiro[2][1]=='8') return 8;
		if(j->tabuleiro[0][2]=='O' && j->tabuleiro[1][2]=='O' && j->tabuleiro[2][2]=='9') return 9;
		if(j->tabuleiro[0][0]=='O' && j->tabuleiro[2][0]=='O' && j->tabuleiro[1][0]=='4') return 4;
		if(j->tabuleiro[0][1]=='O' && j->tabuleiro[2][1]=='O' && j->tabuleiro[1][1]=='5') return 5;
		if(j->tabuleiro[0][2]=='O' && j->tabuleiro[2][2]=='O' && j->tabuleiro[1][2]=='6') return 6;
		if(j->tabuleiro[1][0]=='O' && j->tabuleiro[2][0]=='O' && j->tabuleiro[0][0]=='1') return 1;
		if(j->tabuleiro[1][1]=='O' && j->tabuleiro[2][1]=='O' && j->tabuleiro[0][1]=='2') return 2;
		if(j->tabuleiro[1][2]=='O' && j->tabuleiro[2][2]=='O' && j->tabuleiro[0][2]=='3') return 3;
		if(j->tabuleiro[0][0]=='O' && j->tabuleiro[1][1]=='O' && j->tabuleiro[2][2]=='9') return 9;
		if(j->tabuleiro[0][0]=='O' && j->tabuleiro[2][2]=='O' && j->tabuleiro[1][1]=='5') return 5;
		if(j->tabuleiro[1][1]=='O' && j->tabuleiro[2][2]=='O' && j->tabuleiro[0][0]=='1') return 1;
		if(j->tabuleiro[0][2]=='O' && j->tabuleiro[1][1]=='O' && j->tabuleiro[2][0]=='7') return 7;
		if(j->tabuleiro[0][2]=='O' && j->tabuleiro[2][0]=='O' && j->tabuleiro[1][1]=='5') return 5;
		if(j->tabuleiro[1][1]=='O' && j->tabuleiro[2][0]=='O' && j->tabuleiro[0][2]=='3') return 3;
		if(j->tabuleiro[0][0]=='X' && j->tabuleiro[0][1]=='X' && j->tabuleiro[0][2]!='O') return 3;
		if(j->tabuleiro[1][0]=='X' && j->tabuleiro[1][1]=='X' && j->tabuleiro[1][2]!='O') return 6;
		if(j->tabuleiro[2][0]=='X' && j->tabuleiro[2][1]=='X' && j->tabuleiro[2][2]!='O') return 9;
		if(j->tabuleiro[0][0]=='X' && j->tabuleiro[0][2]=='X' && j->tabuleiro[0][1]!='O') return 2;
		if(j->tabuleiro[1][0]=='X' && j->tabuleiro[1][2]=='X' && j->tabuleiro[1][1]!='O') return 5;
		if(j->tabuleiro[2][0]=='X' && j->tabuleiro[2][2]=='X' && j->tabuleiro[2][1]!='O') return 8;
		if(j->tabuleiro[0][1]=='X' && j->tabuleiro[0][2]=='X' && j->tabuleiro[0][0]!='O') return 1;
		if(j->tabuleiro[1][1]=='X' && j->tabuleiro[1][2]=='X' && j->tabuleiro[1][0]!='O') return 4;
		if(j->tabuleiro[2][1]=='X' && j->tabuleiro[2][2]=='X' && j->tabuleiro[2][0]!='O') return 7;
		if(j->tabuleiro[0][0]=='X' && j->tabuleiro[1][0]=='X' && j->tabuleiro[2][0]!='O') return 7;
		if(j->tabuleiro[0][1]=='X' && j->tabuleiro[1][1]=='X' && j->tabuleiro[2][1]!='O') return 8;
		if(j->tabuleiro[0][2]=='X' && j->tabuleiro[1][2]=='X' && j->tabuleiro[2][2]!='O') return 9;
		if(j->tabuleiro[0][0]=='X' && j->tabuleiro[2][0]=='X' && j->tabuleiro[1][0]!='O') return 4;
		if(j->tabuleiro[0][1]=='X' && j->tabuleiro[2][1]=='X' && j->tabuleiro[1][1]!='O') return 5;
		if(j->tabuleiro[0][2]=='X' && j->tabuleiro[2][2]=='X' && j->tabuleiro[1][2]!='O') return 6;
		if(j->tabuleiro[1][0]=='X' && j->tabuleiro[2][0]=='X' && j->tabuleiro[0][0]!='O') return 1;
		if(j->tabuleiro[1][1]=='X' && j->tabuleiro[2][1]=='X' && j->tabuleiro[0][1]!='O') return 2;
		if(j->tabuleiro[1][2]=='X' && j->tabuleiro[2][2]=='X' && j->tabuleiro[0][2]!='O') return 3;
		if(j->tabuleiro[0][0]=='X' && j->tabuleiro[1][1]=='X' && j->tabuleiro[2][2]!='O') return 9;
		if(j->tabuleiro[0][0]=='X' && j->tabuleiro[2][2]=='X' && j->tabuleiro[1][1]!='O') return 5;
		if(j->tabuleiro[1][1]=='X' && j->tabuleiro[2][2]=='X' && j->tabuleiro[0][0]!='O') return 1;
		if(j->tabuleiro[0][2]=='X' && j->tabuleiro[1][1]=='X' && j->tabuleiro[2][0]!='O') return 7;
		if(j->tabuleiro[0][2]=='X' && j->tabuleiro[2][0]=='X' && j->tabuleiro[1][1]!='O') return 5;
		if(j->tabuleiro[1][1]=='X' && j->tabuleiro[2][0]=='X' && j->tabuleiro[0][2]!='O') return 3;
		else{
			erro:
			cp = rand() %9;
			cp++;
			switch (cp){
				case 1:
					if(j->tabuleiro[0][0]=='X'||j->tabuleiro[0][0]=='O') goto erro;
				break;
				case 2:
					if(j->tabuleiro[0][1]=='X'||j->tabuleiro[0][1]=='O') goto erro;
				break;
				case 3:
					if(j->tabuleiro[0][2]=='X'||j->tabuleiro[0][2]=='O') goto erro;
				break;
				case 4:
					if(j->tabuleiro[1][0]=='X'||j->tabuleiro[1][0]=='O') goto erro;
				break;
				case 5:
					if(j->tabuleiro[1][1]=='X'||j->tabuleiro[1][1]=='O') goto erro;
				break;
				case 6:
					if(j->tabuleiro[1][2]=='X'||j->tabuleiro[1][2]=='O') goto erro;
				break;
				case 7:
					if(j->tabuleiro[2][0]=='X'||j->tabuleiro[2][0]=='O') goto erro;
				break;
				case 8:
					if(j->tabuleiro[2][1]=='X'||j->tabuleiro[2][1]=='O') goto erro;
				break;
				case 9:
					if(j->tabuleiro[2][2]=='X'||j->tabuleiro[2][2]=='O') goto erro;
				break;
			}
			return cp;
		}
	}else{
		erro2:
		cp = rand() %9;
		cp++;
		switch (cp){
			case 1:
				if(j->tabuleiro[0][0]=='X'||j->tabuleiro[0][0]=='O') goto erro2;
			break;
			case 2:
				if(j->tabuleiro[0][1]=='X'||j->tabuleiro[0][1]=='O') goto erro2;
			break;
			case 3:
				if(j->tabuleiro[0][2]=='X'||j->tabuleiro[0][2]=='O') goto erro2;
			break;
			case 4:
				if(j->tabuleiro[1][0]=='X'||j->tabuleiro[1][0]=='O') goto erro2;
			break;
			case 5:
				if(j->tabuleiro[1][1]=='X'||j->tabuleiro[1][1]=='O') goto erro2;
			break;
			case 6:
				if(j->tabuleiro[1][2]=='X'||j->tabuleiro[1][2]=='O') goto erro2;
			break;
			case 7:
				if(j->tabuleiro[2][0]=='X'||j->tabuleiro[2][0]=='O') goto erro2;
			break;
			case 8:
				if(j->tabuleiro[2][1]=='X'||j->tabuleiro[2][1]=='O') goto erro2;
			break;
			case 9:
				if(j->tabuleiro[2][2]=='X'||j->tabuleiro[2][2]=='O') goto erro2;
			break;
		}
		return cp;
		
	}
}

int main(){
	system("color 70");
	struct JogoVelha jogo;
	int posicao,vencedor;
	cont++;
	criatabu(&jogo);
	srand(time(NULL));
	if(cont % 2 == 0) jogo.jogador = 2;
	else jogo.jogador = 1;
	jogo.jogadas = 0;
	menuprincipal(&jogo);
	switch (jogo.escolhamenu){
			case 1:
				while(vencedor != 1){
					menu(&jogo);
					mostratabu(&jogo);
					printf("\n\n  [JOGADOR %d]: Em qual posicao deseja jogar: ",jogo.jogador);
					scanf("%d",&posicao);
					jogando(&jogo,posicao);
					verifica(&jogo);
					if(jogo.jogador == 1) jogo.jogador = 2;
					else jogo.jogador = 1;
				}
			break;
			case 2:
				menu(&jogo);
				printf("\n\n    [1] - facil #\n\n");
				printf("    [2] - dificil #\n\n");
				printf("  Escolha o modo de Jogo: ");
				scanf("%d",&jogo.escolhanivel);
				while(vencedor != 1){
					menu(&jogo);
					mostratabu(&jogo);
					printf("\n\n  [JOG %d]: Em qual posicao deseja jogar: ",jogo.jogador);
					if(jogo.jogador == 1)	scanf("%d",&posicao);
					else{
						posicao = inteligencia(&jogo);
						Sleep(1000);
						printf("%d",posicao);
						Sleep(1500);
					}
					jogando(&jogo,posicao);
					verifica(&jogo);
					if(jogo.jogador == 1) jogo.jogador = 2;
					else jogo.jogador = 1;	
				}
			break;
			default :
 		   		printf ("\n\t ** Valor invalido! **");
 		  		Sleep(1500);
 		  		system("cls");
 		  		menuprincipal(&jogo);
		}
	return 0;
}
