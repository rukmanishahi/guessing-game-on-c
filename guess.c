#include <stdio.h>
#include <stdlib.h>
    int random(int n,int random_number){
        random_number = (rand() % 10)+1;
        printf("Enter the number:: ");
        fflush(stdout);
        scanf("%d",&n);
        if (n==random_number){
            printf("correct guess!\n");
        }
        else if (n<random_number){
            printf("incorrect! the number is higher than the input\n");
        }
        else if (n>random_number){
            printf("incorrect! the number is smaller than the input\n");
        }
        else {
            printf("invalid input\n");
        }
    }
    int main(){
        int x;
        int random_number2;
        random(x,random_number2);
        return 0;
    }
