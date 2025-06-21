#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int generate_comp_choice()
{
    int n = rand() % 3;
    return n + 1;
}

int main()
{
    srand(time(NULL));

    int time, user_score = 0, comp_score = 0, user_choice, comp_choice;
    char name[50], *choice[3] = {"Rock", "Paper", "Scissors"};

    printf("Welcome to the Rock, Paper and Scissors game.\nEnter your name : ");
    fgets(name, sizeof(name), stdin);
    int len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
    }

    printf("Enter the number of rounds you want to play : ");
    scanf("%d", &time);

    for (int i = 0; i < time; i++)
    {
        printf("Enter your choice for round %d\tRock --> 1\tPaper --> 2\tScissors --> 3 : ", i + 1);
        scanf("%d", &user_choice);

        if (user_choice > 3 || user_choice < 1)
        {
            printf("Enter a valid choice.\n");
            i--;
            continue;
        }

        comp_choice = generate_comp_choice();

        printf("%s choose %s and computer choose %s\n", name, choice[user_choice - 1], choice[comp_choice - 1]);

        if (user_choice == comp_choice)
        {
            printf("This round was a draw.\n");
        }
        else if (user_choice == 1)
        {
            comp_choice == 2 ? comp_score++ : user_score++;
            printf("%s's score : %d and computer score : %d\n", name, user_score, comp_score);
        }
        else if (user_choice == 2)
        {
            comp_choice == 3 ? comp_score++ : user_score++;
            printf("%s's score : %d and computer score : %d\n", name, user_score, comp_score);
        }
        else
        {
            comp_choice == 1 ? comp_score++ : user_score++;
            printf("%s's score : %d and computer score : %d\n", name, user_score, comp_score);
        }
    }
    if (user_score > comp_score)
    {
        printf("%s's score is %d and computer's score is %d\tHence %s won the match\n", name, user_score, comp_score, name);
    }
    else if (comp_score > user_score)
    {
        printf("%s's score is %d and computer's score is %d\tHence computer won the match\n", name, user_score, comp_score);
    }
    else
    {
        printf("%s's score is %d and computer's score is %d\tHence the match was a draw\n", name, user_score, comp_score);
    }

    return 0;
}