#include <stdio.h>
#include <string.h>

#define MAX_PLAYER 20
#define MAX_NAME   32

typedef struct {
    char name[MAX_NAME];
    int energy;
    int position;
} Player;

Player players[MAX_PLAYER];

void generatePlayers(int n, int initEnergy)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter name for player %d: ", i);
        scanf("%s", players[i].name);

        players[i].energy = initEnergy;
        players[i].position = 0;
    }
}

void printGrades(int player)
{
    printf("\n[ Player %d Info ]\n", player);
    printf("Name     : %s\n", players[player].name);
    printf("Energy   : %d\n", players[player].energy);
    printf("Position : %d\n", players[player].position);
}

void goForward(int player, int step)
{
    players[player].position += step;
    players[player].energy -= 1;  
}

int main(void)
{
    int n;
    int initEnergy;
    int i;

    printf("Enter number of players (1~%d): ", MAX_PLAYER);
    scanf("%d", &n);

    while (n <= 0 || n > MAX_PLAYER)
    {
        printf("Invalid! Enter number of players again: ");
        scanf("%d", &n);
    }

    fflush(stdin);

    printf("Enter initial energy: ");
    scanf("%d", &initEnergy);

    generatePlayers(n, initEnergy);

    printf("\n--- Players Created ---\n");
    for (i = 0; i < n; i++)
        printGrades(i);

    printf("\n--- Players Move ---\n");
    for (i = 0; i < n; i++)
        goForward(i, 3);

    printf("\n--- After Movement ---\n");
    for (i = 0; i < n; i++)
        printGrades(i);

    return 0;
}
=