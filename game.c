#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char me, char comp)
{
    if (me == comp)
    {
        return 0;
    }
    if (me == 's' && comp == 'p')
    {
        return -1;
    }
    if (me == 's' && comp == 'c')
    {
        return 1;
    }
    if (me == 'p' && comp == 's')
    {
        return 1;
    }
    if (me == 'p' && comp == 'c')
    {
        return -1;
    }
    if (me == 'c' && comp == 's')
    {
        return -1;
    }
    if (me == 'c' && comp == 'p')
    {
        return 1;
    }
}

int main()
{
    char me, comp;
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number <= 34)
    {
        comp = 's';
    }
    if (number > 34 && number <= 68)
    {
        comp = 'p';
    }
    if (number > 68)
    {
        comp = 'c';
    }

    while (me != 's' || me != 'p' || me != 'c')
    {
        printf("Please enter the given cheracter");
        printf("Select the \n's' for stone\n'p' for papre \n'c' for cutter .\n");
        scanf("%c", &me);
        if (me == 's' || me == 'p' || me == 'c')
        {
            break;
        }
    }

    int result = game(me, comp);
    if (result == 0)
    {
        printf("game is draw\n");
    }
    if (result == -1)
    {
        printf("loser\n");
    }
    if (result == 1)
    {
        printf("winner\n");
    }
    return 0;
}