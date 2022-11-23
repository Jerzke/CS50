#include <stdio.h>
void draw(int n);
int main (int argc, char *argv[]) {

    int test;
    int height;
    
    

    printf ("This is a test input something: ");
    scanf ("%d", &test);

    printf ("Desired height?");
    scanf ("%d", &height);
    draw(test);

}

void draw(int n){
for (int i = 1; i <= n; i++) {
for (int j = 1; j < i + 1; j++)
{
printf ("#");
}
printf ("\n");
    }

}