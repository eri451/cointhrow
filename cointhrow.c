#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    char* bet, cmd;
    long random_number, new_random_number;
    while (1)
    {
        srand(time(NULL));

        random_number = rand();
        printf("%d\n", random_number);
        printf("bet if the next number is bigger (+) or lower (-): ");
        scanf("%s",bet);  /* TODO - find out how to use scanf() */

        srand(time(NULL));
        new_random_number = rand();

        printf("%d\n", new_random_number);

        /* TODO - you might want to put that into a function some how */
        if ( bet[0] == '+')
        {
            if ( new_random_number >= random_number ) /* user is correct */
            {
                printf("yeah! you are right\n");
                printf("\nlet's play again!!\n");
                continue;
            }
            else
            {
                printf("trololol :P That was wrong\n");
                printf("\nlet's play again!!\n");
                continue;
            }
        }

        if ( bet[0] == '-')
        {
            if ( new_random_number < random_number ) /* user is correct */
            {
                printf("yeah! you are right\n");
                printf("\nlet's play again!!\n");
                continue;
            }
            else
            {
                printf("trololol :P That was wrong\n");
                printf("\nlet's play again!!\n");
                continue;
            }
        }
    }
}

/* vim: set et sw=4 ts=4: */

