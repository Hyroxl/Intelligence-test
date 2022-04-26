#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    char name[100];
    printf("whats their name: \n");
    scanf("%s", name);
    srand(clock());
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
    printf("their score is %d \n", randomnum);
    printf("%s %s \n", name, " is stupid");
    }
    return 0;
}
