#include <stdio.h>
#include <stdlib.h>
    int random(int n,int random_number){
        random_number = (rand() % 10)+1;
        printf("Enter the number:: ");
        scanf("%d",&n);
        while(n!=random_number){
            if(n>random_number){
                printf("incorrect! the number is smaller than the input");}
            if else{printf("incorrect! the number is greater than the input");}
            continue;
        }
        if(n==random_number){printf("correct! the number is %d",random_number);}
        else{printf("invalid input"); return 0;}
    int main(){
        int x;
        int random_number2;
        random(x,random_number2);
        return 0;
    }
