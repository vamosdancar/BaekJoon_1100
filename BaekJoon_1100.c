#include <stdio.h>

int main(void)
{
    int a = 0;
    char arr[8][8];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            scanf(" %c", &arr[i][j]); //Read 2D array
            //before %c there is space
        }
    }

    // count 'F' characaters
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
            {
                if (arr[i][j] == 'F')
                {
                    a = a + 1;
                }
            }
        }
    }

    printf("%d", a);

    return 0;
}


