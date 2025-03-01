// "snake" vs "water": "snake" win
// "snake" vs "gun": "gun" win
// "gun" vs "water": "water" win
#include <stdio.h>
#include <string.h>
int main()
{
    char comp_choice[6] = "snake";
    char user[6] = "water";

    if (user == comp_choice)
    {
        printf("draw!");
    }
    else if (user == "snake\0" && comp_choice == "water\0")
    {
        printf("you win!");
    }
    else if (user == "gun" && comp_choice == "snake")
    {
        printf("you win!");
    }
    else if (user == "water" && comp_choice == "gun")
    {
        printf("you win!");
    }
    else if (user == "snake" && comp_choice == "gun")
    {
        printf("you lose!");
    }
    else if (user == "gun" && comp_choice == "water")
    {
        printf("you lose!");
    }
    else if (user == "water\0" && comp_choice == "snake\0")
    {
        printf("you lose!");
    }
    else
    {
        printf("error in choice!");
    }
    return 0;
}