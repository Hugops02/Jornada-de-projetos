#include <stdio.h>
#include <string.h>

// Estados da máquina
typedef enum
{
    q0,
    q1,
    q2,
    q_accept,
    q_reject
} Estado;

int main()
{
    char fita[100];

    printf("Digite a palavra: ");
    scanf("%s", fita);

    // adiciona branco no início e no fim
    char fita2[102];
    fita2[0] = ' ';
    strcpy(&fita2[1], fita);
    strcat(fita2, " ");

    int head = 1;
    Estado estado = q0;

    while (1)
    {
        char simbolo = fita2[head];

        switch (estado)
        {

        case q0:
            if (simbolo == 'a')
            {
                fita2[head] = 'A';
                head++;
                estado = q1;
            }
            else if (simbolo == 'A' || simbolo == 'B')
            {
                head++;
            }
            else if (simbolo == ' ')
            {
                estado = q_accept;
            }
            else
            {
                estado = q_reject;
            }
            break;

        case q1:
            if (simbolo == 'a' || simbolo == 'A' || simbolo == 'B')
            {
                head++;
            }
            else if (simbolo == 'b')
            {
                fita2[head] = 'B';
                head--;
                estado = q2;
            }
            else
            {
                estado = q_reject;
            }
            break;

        case q2:
            if (simbolo == 'a' || simbolo == 'A' ||
                simbolo == 'b' || simbolo == 'B')
            {
                head--;
            }
            else if (simbolo == ' ')
            {
                head++;
                estado = q0;
            }
            break;

        case q_accept:
            printf("\nResultado: ACEITA\n");
            printf("Fita final: %s\n", fita2);
            return 0;

        case q_reject:
            printf("\nResultado: REJEITA\n");
            printf("Fita final: %s\n", fita2);
            return 0;
        }
    }
}