#include <stdio.h>
#include <string.h>

typedef struct{
    char * name;
    char * number;
    
}
person;

int main (int argc, char *argv[]) {

person people[2];
people[0].name = "Seppo";
people[0].number = "+358504339474";


for (int i = 0; i < 20; i++){
 if (strcmp(people[i].name, "Seppo") == 0){
     
        printf("Found! %s %s\n", people[i].name, people[i].number );
        return 0;
     }

  
}
  printf("Not Found");
     return 1;
}
