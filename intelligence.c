#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    char name[100];
    printf("whats their name: \n");
    scanf("%s", name);
    srand(clock());
    int randomnum2 = rand()%5;
    int randomnum = rand()%101;
    int trufal = 2;
    if (randomnum >= 50) {
        trufal = 1;
    } else {
        trufal = 0;
    }
    if (trufal == 1){
    printf("their score is %d \n", randomnum);
    printf("%s %s \n", name, " is smart");
    } else if (trufal == 0) {
        if (randomnum2 == 0) {
        printf("their score is %d \n", randomnum);
        printf("%s %s \n", name, " is stupid");
        } else if (randomnum2 == 1) {
        printf("their score is %d \n", randomnum);
        printf("%s %s \n", name, " is maidenless");
        } else if (randomnum2 == 2) {
        printf("their score is %d \n", randomnum);
        printf("%s %s \n", name, " needs to touch grass");
        } else if (randomnum2 == 3) {
        printf("their score is %d \n", randomnum);
        printf("%s \n", "your mom");
        } else if (randomnum2 == 4) {
        printf("their score is %d \n", randomnum);
        printf("%s %s \n", name, " is short");
        }
    }
    return 0;
}
