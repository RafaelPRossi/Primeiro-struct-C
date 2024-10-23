#include <stdlib.h>
#include <stdio.h>

int main()
{
    float media = 0;

    struct Boletim
    {
        char nome[30];
        float nota[4];
    };

    struct Boletim Aluno[5];

    for(int i = 0; i < 5; i++)
    {
        media = 0;
        printf("--- ALUNO %i ---\n", i+1);

        printf("Digite o nome do Aluno: ");
        fgets(Aluno[i].nome,30,stdin);
        fflush(stdin);

        for(int j = 0; j < 4; j++)
        {
            printf("\tNota %i: ", j+1);
            scanf("%f", &Aluno[i].nota[j]);
            fflush(stdin);

            media = Aluno[i].nota[j] + media;
        }

        media = media/4;
        printf("\nMEDIA - %.2f \n", media);

        system("pause");
        system("cls");
    }

    return 0;
}
