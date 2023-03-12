# include<stdio.h>

int main() {
    int a ,b,s;
    printf("enter your arithematic operation no.: ");
    scanf("%d",&s);

    printf("enter a");
    scanf("%d", &a);
    
    printf("enter b");
    scanf("%d", &b);

    switch(s){
        case 1 : printf("sum is : %d",a+b);
                break;
        case 2 : printf("sub is : %d",a-b);
                break;
        case 3 : printf("div is : %d",a/b);
                break;
        case 4 : printf("mul is : %d",a*b);
                break;
        case 5 : printf("mod is : %d",a%b);
                break;
        default : printf("not application");
                break;                
    return 0;
    }

}
