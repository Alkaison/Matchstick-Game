#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// Firstly only making player vs computer then player vs player
void welcomescreen(void);
void menu(void);
void player(void);
void computer(void);
void playground1(void);
void playground2(void);
void endscreen(void);
void cleaner(void);

int sticks, player1, machine, player2;

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
    int input=0;

lable1:
    printf("-----------------------------------------\n");
    printf(">>> Select your choice <<< \n");
    printf("-----------------------------------------\n\n");
    printf("> 1. Player vs Computer \n");
    printf("> 2. Player vs Player \n");
    printf("> 3. Exit Game \n");

    printf("> Enter the number & hit ENTER: ");
    scanf("%d",&input);

    switch(input)
    {
        case 1:
            playground1();
            break;
        case 2:
            playground2();
            break;
        case 3:
            endscreen();
            break;
        default:
            printf("Invalid Input, Press any key to continue... \n");
            getch();
            goto lable1;
    }
}

void player(){

}

void computer(){

}

void playground1(){

}

void playground2(){

}

void cleaner(){
    system("cls");
    fflush(stdin);
}

void endscreen(){

}