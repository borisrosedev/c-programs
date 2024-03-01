#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


void display_arr(char *question)
{
    printf("%s\n", question);
}

int main()
{

    
    int input;
    char question[] = "Voulez-vous jouer ? tapez 1 pour oui et 2 pour non";
    display_arr(question);
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        display_arr("Vous souhaitez jouer");
        break;
    case 2:
        display_arr("Vous ne voulez pas jouer");
        break;
    default:
        display_arr("Réponse incorrecte");
        break;
    }
    getchar();
    return 0;
}
