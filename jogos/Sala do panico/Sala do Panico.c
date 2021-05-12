#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#define tempomin 80
void carregar(){
	system("cls");
	printf("\n\tcarregando.");
	Sleep(500);
	system("cls");
	printf("\n\tcarregando. .");
	Sleep(500);
	system("cls");
	printf("\n\tcarregando. . .");
	Sleep(500);
	system("cls");
}
void exibirMenu(int iConhece, char **cItens){
	if(iConhece == 1){
		char teste[4];
		printf("\n\n   ---------------- Itens necessarios para minha fuga -------------\n\n");
		printf("    ______________________________________________________________\n");
		printf("   |                                                              |\n");
		printf("   | Macaneta | Chave da Porta | Chave do Cadeado | Linha | Clips |\n");
		printf("   |____%c_____|_______%c________|________%c_________|___%c___|___%c___|\n\n\n\n\n", *cItens[0], *cItens[1], *cItens[2], *cItens[3], *cItens[4]);
		
	}else	printf("\n\n   *** Voce ainda nao sabe por onde e como fugir! ***\n\n\n\n\n");
}

int main(){
	system("color a");
	carregar();
	time_t start,end;
	printf("  ATECAO!! Esse jogo pode fazer seu computador desligar.\n  Entao antes de comecar a jogar salve todos os arquivos que\n  voce pode perder durante o desligamento. Bom jogo e Boa sorte\n\n");
	system("pause");
	system("cls");
	char cMacaneta = 'n', cChavePorta = 'n', cChaveCadeado = 'n', cLinha = 'n', cClips = 'n';
	char* cItens[5];
	int iItem = 0;
	float tempo;
	
	cItens[iItem++] = &cMacaneta;
	cItens[iItem++] = &cChavePorta;
	cItens[iItem++] = &cChaveCadeado;
	cItens[iItem++] = &cLinha;
	cItens[iItem++] = &cClips;
	
	int iDirecao, iSabe = 0, iLoop = 0;
	printf("\n\n\n\t  Voce esta em uma sala preso. Saia antes de tres minutos ou morrera | Boa sorte !! \n\n");
	Sleep(4000);
	start = time(NULL);
	system("cls");
	
	do{  
		end = time(NULL);
		tempo = difftime(end,start);
		if(tempo > tempomin){
			exit(0);
			system("shutdown -h");
		} 
		exibirMenu(iSabe, cItens);
		iDirecao = 6;
		printf("  Voce esta em uma sala preso. Saia antes de tres minutos ou morrera | Boa sorte !! \n\n");
		printf("|  [1] - Porta de saida\n");
		printf("|  [2] - Uma mesa\n");
		printf("|  [3] - Uma lixeira\n");
		printf("|  [4] - Um ralo de esgoto no chao\n");
		printf("|  [8] - Carregar o jogo\n");
		printf("|  [9] - Sair do jogo\n");
		printf("|  [0] - Salvar situacao atual do jogo\n\n");
		printf("|  * Para onde voce deseja ir?\n\n");
		printf("|  Digite o numero do local: ");
		scanf("%d", &iDirecao);
		
		if(iDirecao == 1){
			system("cls");
			carregar();
			exibirMenu(iSabe, cItens);
			printf("\tA porta esta trancada, esta faltando a macaneta e possui um cadeado trancando-a.\n\n");
			
			if(cMacaneta == 'n'){
				printf("\t Voce ainda nao possui a macaneta.\n");
			} else {
				printf("\t Voce ja possui a macaneta.\n");
			}
			
			if(cChavePorta == 'n'){
				printf("\t Voce ainda nao possui a chave da porta\n");
			} else {
				printf("\tVoce ja possui a chave da porta.\n");
			}
			
			if(cChaveCadeado == 'n'){
				printf("\t Voce ainda nao possui a chave do cadeado.\n\n");
			} else {
				printf("\t Voce ja possui a chave do cadeado.\n\n");
			}
			
			if(cMacaneta == 's' && cChaveCadeado == 's' && cChavePorta == 's'){
				system("cls");
				system("color af");
				printf("\n\n\tVoce conseguiu sair da sala. Parabens!   |  Tempo: %.0f\n\n",difftime(end,start));
				printf("\t****** VOCE CONSEGUIU FUGIR! *****\n\n\n\n\n");
				printf("\t\t                                                          \n");
				printf("\t\t          ###       ####       ###   ###    ####      ### \n");
				printf("\t\t          ###      ######      ###   ###    #####     ### \n");
				printf("\t\t           ###    ###  ###    ###    ###    ### ###   ### \n");
				printf("\t\t           ###    ###  ###    ###    ###    ###  ###  ### \n");
				printf("\t\t            ###   ###   ###  ###     ###    ###   ### ### \n");
				printf("\t\t            ###  ###     ### ###     ###    ###     ##### \n");
				printf("\t\t             ######       #####      ###    ###      #### \n");
				printf("\t\t                                                          \n");
				printf("\n\n\n\t Jogo by: Jayme Augusto\n\n");
				system("PAUSE");
				exit(0);
			}
			
			iSabe = 1;
			system("PAUSE");
			system("cls");
			carregar();
			
		} else if(iDirecao == 2){
			int iLoopGaveta = 0;
			int iGaveta = 0;
			carregar();
			
			while(iLoopGaveta != 1){
				system("cls");
				exibirMenu(iSabe, cItens);
				printf("\t Neste canto da sala possui uma mesa. A mesa possui tres gavetas.\n");
				printf("\n\t Quais delas voce deseja abrir?\n");
				printf("\n\t|  [1] - Gaveta 1\n\t|  [2] - Gaveta 2\n\t|  [3] - Gaveta 3\n\t|  [4] - Sair\n");
				printf("\n\tGaveta: ");
				scanf("%i", &iGaveta);
				
				switch(iGaveta){
					case 1:
						printf("\n\n\t Ao abrir a primeira gaveta, voce nao ve nada de interessante\n\n");
					break;
					
					case 2:
					 
						if(cMacaneta == 'n'){
							printf("\n\t Na gaveta, voce acha uma velha macaneta!");
							printf("\n\n\n\n");
							printf("\t***** VOCE OBTEVE A MACANETA!!! *****\n\n");
							cMacaneta = 's';
						} else {
							printf("\n\n\tA gaveta esta vazia.\n");
						}
					break;
					
					case 3:
						if(cClips == 'n'){
							printf("\n\n\tAo abrir a gaveta, voce encontra um clips de papel.!\n\n");                   
							printf("\t ***** VOCE OBTEVE O CLIPS DE PAPEL!!! *****\n\n");
							cClips = 's';
						} else {
							printf("\n\n\tA gaveta esta vazia.\n");
						}
					break;
				
					case 4:
						iLoopGaveta = 1;
					break;
					
					default:
						printf("\t*** ha algo errado... ***");
						Sleep(5000);
						system("cls");
					break;
				}
				system("PAUSE");
				system("cls");
				carregar();
			}       
		} else if (iDirecao == 3){
		carregar();
		int iMenu = 0;
		system("cls");
		exibirMenu(iSabe, cItens);
		
		printf("\tVoce avista uma lixeira cheia de papeis.\n");
		printf("\t O que deseja fazer?\n\n\t|  [1] - Verificar a lixeira\n\t|  [2] - Voltar\n\n");
		printf("\t Acao: ");
		scanf("%i", &iMenu);
		
		switch(iMenu) {
			case 1:
				
				if(cChavePorta == 's' && cLinha == 's'){
					printf("\n\t Voce nao acha mais nada interessante na lixeira.\n\n");
				} else {
					printf("\n\n\t Ao mexer na lixeira, voce acha uma chave pequena e um pedaco de linha!");
					printf("\n\n");
					printf("\t***** VOCE OBTEVE A CHAVE DA PORTA!!! *****\n");
					cChavePorta = 's';
					printf("\t***** VOCE OBTEVE A LINHA *****\n\n");
					cLinha = 's';
				}
			break;
		}
		
		system("PAUSE");
		system("cls");
		carregar();
		
		} else if (iDirecao == 4){
			int iMenu = 0;
			int iCombina = 0;
			carregar();
			system("cls");
			exibirMenu(iSabe, cItens);
			
			printf("\tVoce ve um ralo no chao. O que voce faz?\n");
			printf("\n\t|  [1] - Verifica o ralo\n\t|  [2] - Voltar\n\t Acao: ");
			scanf("%i", &iMenu);
			
			switch(iMenu) {
				case 1: 
					printf("\n\n\tVoce ve, no fundo do ralo, uma pequena chave, mas sua mao\n e grande d+ para passar.\n");
					
					if(cLinha == 's' && cClips == 's'){
						printf("\n\tVoce quer criar um 'anzol' com a linha e o clips?");
						printf("\n\t|  [1] - Sim\n\t|  [2] - Nao\n\t Acao: ");
						scanf("%i", &iCombina);
						
						if(iCombina == 1) { 
							system("cls");
							exibirMenu(iSabe, cItens);
							printf("\n\n\tVoce combinou os dois itens e, com o 'anzol', conseguiu\n pegar a chave de dentro do ralo\n\n");
							printf("\t***** VOCE OBTEVE A CHAVE DO CADEADO *****\n\n");
							cChaveCadeado = 's';
							cLinha = 'n';
							cClips = 'n';
						}
					}
				break;
			}
			system("PAUSE");
			system("cls");
			carregar();
			
		} else if (iDirecao == 0){
			char cDecisao;
			
			system("cls");
			printf("\n\n");
			printf("\tDeseja realizar o save? s/n\n");
			scanf("%s", &cDecisao);
			
			if(cDecisao == 's' || cDecisao == 'S') {
				FILE *pArqSave;
				char cItensSave[6];
				int iLoopSave;
				
				pArqSave = fopen("save.txt", "w");
				
				if(pArqSave == NULL) {
					fputs("Erro no arquivo!", stderr);
					exit(1);
				}
				cItensSave[5] = '\0';
				
				for(iLoopSave = 0; iLoopSave < 5; iLoopSave++) {
					cItensSave[iLoopSave] = *(cItens[iLoopSave]);
				}
				
				fflush(pArqSave);
				
				fputs(cItensSave, pArqSave);
				
				fclose(pArqSave);
			}
			system("cls");
			printf("\n\tSave realizado com sucesso!\n\n");
		
		} else if (iDirecao == 8){
			char cDecisao;
			
			system("cls");
			printf("\n\n");
			printf("\tDeseja realizar o load? s/n\n");
			scanf("%s", &cDecisao);
			
			if(cDecisao == 's' || cDecisao == 'S') {
				FILE *pArqLoad;
				char cItensLoad[5];
				int iLoopLoad;
				pArqLoad = fopen("save.txt", "r");
				
				if(pArqLoad != NULL) {
					if( fgets(cItensLoad, 6, pArqLoad) != NULL ) {
						puts(cItensLoad);
					}
				}
				fclose(pArqLoad);
				
				for(iLoopLoad = 0; iLoopLoad < 5; iLoopLoad++) {
					*(cItens[iLoopLoad]) = cItensLoad[iLoopLoad];
				} 
			}
			system("cls");
			printf("\n\tLoad realizado com sucesso!\n\n");
			
		} else if (iDirecao == 9){
			carregar();
			system("cls");
			printf("\n\n\n\t Obrigado por jogar meu jogo ! | ate mais\n\n");
			printf("saindo...                                                    by: Jayme Augusto");
			Sleep(5000);
			system("shutdown -a");
			exit(0);
		} else {
			system("cls");
		}
	} while(iLoop != 1);
	system("PAUSE");	
	return 0;
}
