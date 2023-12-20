#include <stdio.h>
#include <locale.h>

struct horario
{
    int horas, minutos, segundos;  

} typedef horario;


int main(){
    setlocale(LC_ALL, "Portuguese");

    horario inicio, duracao;

    printf("Informe o horário atual (clica na barra de espaço após cada campo): ");
    scanf("%d:%d:%d", &inicio.horas, &inicio.minutos, &inicio.segundos);

    printf("%d:%d:%d", &inicio.horas, &inicio.minutos, &inicio.segundos);
    

    return 0;
}