#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// Firstly only making player vs computer then player vs player
void welcomescreen(void);
void menu(void);
void player(void);
void computer(void);
void scoreboard(void);
void highscore(void);   
void cleaner(void);

int main(){

    welcomescreen();  
    menu();
    return 0;
}

void welcomescreen(){

    cleaner();
    printf("-----------------------------------------\n");
    printf(">>> Welcome to 21 Matchstick Game <<< \n");
    printf("-----------------------------------------\n\n");
    printf(">> Game Rules: \n\n");
    printf("1. There are 21 matchsticks. \n");
    printf("2. The computer asks the player to pick 1, 2, 3 or 4 matchsticks. \n");
    printf("3. After the person picks, the computer does its picking. \n");
    printf("4. Whoever is forced to pick up the last matchstick loses the game. \n\n");

    printf("Press any key to start... \n");
    getch();
}

void menu(){
    cleaner();
    printf("Welcome to Menu");
}

void player(){

}

void computer(){

}

void scoreboard(){

}

void highscore(){
    
}

void cleaner(){
    system("cls");
    fflush(stdin);
}