//
//  main.c
//  05-6
//
//  Created by MacBook Air on 2023/10/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int answer = 59;
    int num;
    int trial = 0;
    
    do {
        printf("Guess a number :");
        scanf("%d", &num);
        
        if(num<answer)
        {
            printf("low!\n");
        }
        else if(num>answer)
        {
            printf("high!\n");
        }
        else
        {
            printf("congratulation! trials:%d \n",trial +1);
        }
        trial = trial + 1;
    } while (num!=answer);
    
    return 0;
}
