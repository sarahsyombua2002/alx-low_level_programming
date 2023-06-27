#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;
    int rand_num;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        rand_num = rand() % 62;

        if (rand_num < 10)
            password[i] = rand_num + '0';
        else if (rand_num < 36)
            password[i] = rand_num - 10 + 'a';
        else
            password[i] = rand_num - 36 + 'A';
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);

    return (0);
}
