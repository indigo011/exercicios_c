//colocando o sufixo ista nas palavras
#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[105];
    char sufixo[] = "ista";

    //limpando o array palavra
    for (int i = 0; i < 105; i++)
    {
        palavra[i] = '\0';
    }

    //recebendo a palavra
    printf("Digite uma palavra de ate 100 letras: ");
    scanf(" %s", palavra);

    int tam = strlen(palavra);

    //verifica se ja possui o sufixo
    int temSufixo = 1;
    for (int i = 0; i < 4; i++)
    {
        if (palavra[tam -4 + i] != sufixo[i])
        {
            temSufixo = 0;
            break;
        }
            
    }

    //procurando consoantes
    if (temSufixo == 0)
    {
        for (int j = tam - 1; j >= tam - 4; j--)
        {
            if (palavra[j] != 'a' && palavra[j] != 'e'&& palavra[j] != 'i' && palavra[j] != 'o' && palavra[j] != 'u')
            {
                //adicionando o sufixo à palavra
                for (int k = 1; k < 5; k++)
                {
                    palavra[j + k] = sufixo[k-1];
                }

                break;
            }
        }
    } 
    //imprimindo nova palavra
    printf("%s", palavra);

    return 0;
}