#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void introduce(void);
void regis(void);
void game(void);
void playing(void);

int main(){
	introduce();
	regis();
    game();
    playing();
}
void introduce(void){
    
	system("COLOR 4");
	printf("\n\n\n\n\n");
	printf("                                                * W E L C O M E   T O *\n");
	printf("                                          * G U E S T   T H E   N U M B E R *\n\n\n");
	printf("                                                    * M A D E   B Y *\n\n");
	printf("                                      1.  Anis Fuadi Putra          3332210018\n");
	printf("                                      2.  Tubagus Arya Rudiyansyah  3332210030\n");
	printf("                                      3.  Putri Aulia               3332210024\n\n\n\n\n\n\n");
	puts("                                              PRESS ENTER TO PLAY A GAME\n ");
	getch();
	system("cls");
}
void regis(void){

	char email[30], pw[30], email1[30], pw1[30];
	
	
	printf("                                             ________________________________\n");
	printf("                                            |                                |\n");
	printf("                                            |  **   Please Registrasi    **  |\n");
    printf("                                            |________________________________|\n\n");
    printf("                                                  ***                ***\n");
    printf("                                                  * *                * *\n");
    printf("                                                  ***                ***\n\n");
    printf("                                                      *_          _*\n");
    printf("                                                        **********\n\n\n");
    
	printf("                                      _____________________________________________\n");
	printf("                                     |                                             |\n");
	printf("                                     |Username : ");scanf("%s",email);
    printf("                                     |Password : ");scanf("%s",pw);
    printf("                                     |_____________________________________________|\n"); 
	system("cls");
	printf("                                                      Registrasi Succes\n\n");
    
    
	start:
    
	printf("                                             ___________________________________\n");
	printf("                                            |                                   |\n");
	printf("                                            |      **   Please Login    **      |\n");
    printf("                                            |___________________________________|\n\n");
    printf("                                                   ***                ***\n");
    printf("                                                   * *                * *\n");
    printf("                                                   ***                ***\n\n");
    printf("                                                       *_          _*\n");
    printf("                                                         **********\n\n\n");
    
    
    
    
    
    printf("                                      ________________________________________________\n");
    printf("                                     |                                                |\n");
    printf("                                     |Username : ");scanf("%s",email1);
    printf("                                     |Password : ");scanf("%s",pw1);
    printf("                                     |________________________________________________|\n"); 
    
    if((strcmp(email1,email) == 0) && (strcmp(pw1,pw)==0)){
    	system("cls");
    	printf("\n\n");
    	printf("                                                     Login Succes\n\n");
		game();
	}else{
		system("cls");
		printf("                                                *USER NAME AND PASSWORD FALSE\n");
		printf("\a");
		goto start;
	}
}
void game(void){
	int i,j,k,l,a;
	system("COLOR A");
	printf("                              Max Number: ");scanf("%d", &a);
	printf("                              Player : ");scanf("%d", &i);
	for(j=0;j<i;j++){
	printf("                              Write your number : ");scanf("%d", &k);
	}
	for(j=0;j<i;j++){
		l = rand () % a + 1;
        printf("                                        \n Number True : %d\n", l);
	}
	if(k==l){
		printf("                                                  _____________________\n");
		printf("                                                 |                     |\n" );
		printf("                                                 |       You Won       |\n");
		printf("                                                 |_____________________|\n");
	}else{
		printf("                                                  _____________________\n");
		printf("                                                 |                     |\n" );
		printf("                                                 |      Try Again      |\n");
		printf("                                                 |_____________________|\n");
	}
	playing();
}
void playing(void){
    int play;
    system("COLOR F4");
	start:
    printf("\n\n");
	printf("                                                  Do you want to play again?\n");
	printf("                                                    1. Yes\n");
	printf("                                                    2. No \n");
	printf("                                                  Give Your Choice:");
    scanf("%d", &play);
    printf("\n\n");
 
    if(play==1){
        system("cls");
        game();
	}else if(play==2){
		system("cls");
		exit(0);
	}else{
		system("cls");
		goto start;
	}
}

