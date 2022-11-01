#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int sticks=21, player1=0, computer=0, player2=0;
    const int MIN = 1;
    const int MAX = 4;
 
void welcomescreen(void);
void menu(void);
void playground1(void);
void playground2(void);
void playground3(void);
void endscreen(void);
void cleaner(void);

int main(){

    welcomescreen();  
    menu();
    return 0;
}

void cleaner(){
    system("cls");
    fflush(stdin);
}

void welcomescreen(){

    cleaner();
    printf("--------------------------------------\n");
    printf(">>> Welcome to 21 Matchstick Game <<< \n");
    printf("--------------------------------------\n\n");
    printf(">> Rules: \n");
    printf("1. There are 21 matchsticks. \n");
    printf("2. The computer asks the player to pick 1, 2, 3 or 4 matchsticks. \n");
    printf("3. After the person picks, the computer does its picking. \n");
    printf("4. Pick less than the available sticks to win. \n");
    printf("5. Whoever is forced to pick up the last matchstick loses the game. \n\n");

    printf("Press any key to start... \n");
    getch();
}

void menu(){

    int input=0;

label1:
    cleaner();
    printf("---------------------------\n");
    printf(">>> Select your choice <<< \n");
    printf("---------------------------\n\n");
    printf("> 1. Player vs Computer \n");
    printf("> 2. Player vs Player \n");
    printf("> 3. Player vs A.I. (Impossible)\n");
    printf("> 4. Exit Game \n\n");

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
            playground3();
            break;
        case 4:
            endscreen();
            break;
        default:
            printf("Invalid Input, Press any key to retry... ");
            getch();
            goto label1;
    }
}

void playground1(){
    
    cleaner();
    printf("----------------------------\n");
    printf(">>> Player V/s Computer <<< \n");
    printf("----------------------------\n\n");

label2:
    printf("\nNumber of Match Sticks left: %d \n", sticks);
    printf("Pick between 1 to 4 sticks: ");
    scanf("%d",&player1);
    fflush(stdin);
    if(player1 > 4 || player1 < 1 || player1 >= sticks)
    {
        printf("\nError (%d): Invalid Input. \n", player1);
        goto label2;
    }
    else
    {
        sticks -= player1;
        if(sticks == 1)
        {
            sticks = 21;
            printf("\nComputer Picked the Last Stick \n\n");
            printf("-------------------\n");
            printf(">>> Player Won <<< \n");
            printf("-------------------\n\n");
            printf("Press any key to continue... \n");
            getch();
            menu();
        }
label3:
        srand(time(0));
        computer = (rand() % MAX) + MIN;

        if (computer >= sticks)
        {
            goto label3;
        }
        
        printf("\nNumber of Match Sticks left: %d \n", sticks);
        printf("Computer picked: %d \n", computer);
        sticks -= computer;

        if(sticks > 1)
        {
            goto label2;
        }
        else if(sticks == 1)
        {
            sticks = 21;
            printf("\nYou Picked the Last Stick! \n\n");
            printf("---------------------\n");
            printf(">>> Computer Won <<< \n");
            printf("---------------------\n\n");
            printf("Press any key to continue... \n");
            getch();
            menu();
        }
    }
}

void playground2(){
    printf("PlayGround 2");
}

void playground3(){

    cleaner();
    printf("------------------------\n");
    printf(">>> Player V/s A.I. <<< \n");
    printf("------------------------\n\n");

label2:
    printf("\nNumber of Match Sticks left: %d \n", sticks);
    printf("Pick between 1 to 4 sticks: ");
    scanf("%d",&player1);
    fflush(stdin);
    if(player1 > 4 || player1 < 1 || player1 >= sticks)
    {
        printf("\nError (%d): Invalid Input. \n", player1);
        goto label2;
    }
    else
    {
        sticks -= player1;
        if(sticks == 1)
        {
            sticks = 21;
            printf("\nA.I. Picked the Last Stick \n\n");
            printf("-------------------\n");
            printf(">>> Player Won <<< \n");
            printf("-------------------\n\n");
            printf("Press any key to continue... \n");
            getch();
            menu();
        }
label3:
        /* srand(time(0));
        computer = (rand() % MAX) + MIN;

        if (computer >= sticks)
        {
            goto label3;
        } */

        computer = 5 - player1;
        
        printf("\nNumber of Match Sticks left: %d \n", sticks);
        printf("A.I. picked: %d \n", computer);
        sticks -= computer;

        if(sticks > 1)
        {
            goto label2;
        }
        else if(sticks == 1)
        {
            sticks = 21;
            printf("\nYou Picked the Last Stick! \n\n");
            printf("---------------------\n");
            printf(">>> A.I. Won <<< \n");
            printf("---------------------\n\n");
            printf("Press any key to continue... \n");
            getch();
            menu();
        }
    }
}

void endscreen(){
    
    cleaner();
    printf("-------------------------------------------\n");
    printf(" >>> Creator: @Alkaison (Ganesh Mourya) <<< \n");
    printf("-------------------------------------------\n\n");

    printf("> Github: https://github.com/Alkaison \n");
    printf("> Twitter: https://twitter.com/Alkaison \n");
    printf("> LinkedIn: https://www.linkedin.com/in/Alkaison \n\n");

    exit(0);
}