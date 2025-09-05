#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int user();
int bot();
int winner(int bot, int user);
int game();
int main()
{
    while (1)
    {
        printf("Page will be refreshed in 3 seconds after game completed\n\n");
        game();
        sleep(3);
        system("clear");
    }
    return 0;
}

int game()
{
    srand(time(NULL));
    printf("\tRock Paper Scissors\n");
    int botchoice = bot();
    int userchoice = user();

    switch (userchoice)
    {
    case 1:
        printf("You have choosed Rock🪨\n");
        break;
    case 2:
        printf("You have choosed Paper📜\n");
        break;
    case 3:
        printf("You have choosed Scissors✂️\n");
    }

    switch (botchoice)
    {
    case 1:
        printf("Bot has choosed Rock🪨\n");
        break;
    case 2:
        printf("Bot has choosed Paper📜\n");
        break;
    case 3:
        printf("Bot has choosed Scissors✂️\n");
    }

    winner(botchoice, userchoice);

    return 0;
}

int user()
{
    int choice;
    do
    {
        printf("1.Rock🪨\n2.Paper📜\n3.Scissors✂️");
        printf("\nType here[1-3]:");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);
    return choice;
}

int bot()
{
    return (rand() % 3)+1;
}

int winner(int bot, int user)
{
    if (user == 1 && bot == 3)
    {
        printf("You Win\n");
    }
    else if (user == 2 && bot == 1)
    {
        printf("You Win\n");
    }
    else if (user == 3 && bot == 2)
    {
        printf("You Win\n");
    }
    else if (user == bot)
    {
        printf("It's a Tie\n");
    }
    else
    {
        printf("You Lose\n");
    }
    return 0;
}