#include <stdio.h>
int main(){
        char name[100];
        char family[100];
        printf("Enter your name:\n");
        scanf("%s",name);
        printf("Hello %s!\n", name);

        /* Returns the first x characters of the entered value */
        printf("Enter your last name:\n");
        scanf("%3s", family);
        printf("Only the first 3 characters of your input were printed: %s\n", family);
        printf("You can change the number of characters as desired to print.\n");

        /* scanf("%Xs", variable)
           Replace X with the desired integer value */
        return 0;
}

