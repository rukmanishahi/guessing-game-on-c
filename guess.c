#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    void guess(){
        int n,random_number;
        random_number = (rand() % 10)+1;
       
        while(1){
             printf("Enter the number:: ");
        scanf("%d",&n);
            if(n>random_number){
                printf("wrong! the correct number is smaller than the input\n");}
            else if (n<random_number){printf("wrong! the correct number is greater than the input\n");}
            else {printf("that's right! the correct number was %d",random_number);
            break;}}}
    int main(){
        srand(time(NULL));
        guess();
        return 0;
    }
