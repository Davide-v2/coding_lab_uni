#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char carattere;

    //l'utente inserisc un carattere
    printf("Inserisci un carattere: ");
    scanf("%c", &carattere);

    while(carattere != '\n')
    {
        //controllo che carattere sia una lettera
        if(isalpha(carattere))
        {
            if(isupper(carattere))
            {
                printf("\nIl carattere digitato è maiuscolo");
            }
            else printf("\nIl carattere digitato è minuscolo");
        }

        else printf("\nIl carattere digitato non è una lettera");

        printf("\nInserisci un carattere: ");
        scanf("%c", &carattere);
    }

    return 0;
}