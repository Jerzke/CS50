#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

    int rows;
    char reverse;

    printf ("How many rows would you like to have?: ");
    scanf ("%d", &rows);
    printf("Rows: %d\n", rows);



    if (rows > 9 || rows < 1)
    {
     printf ("Your input is invalid.\n");
    }
    else
    {
        for (int i = 0; i <= rows; i++){
        for (int j = 0; j < (i / 1); j++){
    printf("#");
    }
    printf ("\n");

        } 
        
    }
}