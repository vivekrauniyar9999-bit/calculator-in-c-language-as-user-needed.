#include <stdio.h>
int main(){
    int a,b,hcf;
    printf("Enter your number: ");
    scanf("%d %d",&a,&b);
    int sum = a+b , prd = a*b , div = a/b , rem = a%b , sub = a-b , expon=a^b;
    char opr;
    printf("Enter Your oprations:");
    scanf(" %c",&opr);
    if(opr == '+'){
        printf("Your Answer: %d",sum);
    }
    else if(opr == '-'){
        printf("Your Answer: %d",sub);

    }
    else if(opr == '*'){
        printf("Your Answer: %d",prd);
    }
    else if(opr == '^'){
        printf("Your Answer: %d",expon);
    }
    else if(opr == '*'){
        printf("Your Answer: %d",prd);
    }
    else if(opr == '/'){
        if(b!=0){
        printf("Your Answer: %d",div);
        }
        else{
            printf("error:");
        }
    }
    else if(opr == '%'){
        if(b!=0){
        printf("Your Answer: %d",rem);
        }
        else{
            printf("error:");
        }
    }
    else{
        printf("Invalid Oprations:");
    }
    return 0;
}