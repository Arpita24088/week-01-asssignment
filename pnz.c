# include<stdio.h>

int main() {
    int a ;
    printf("enter a number: ");
    scanf("%d",&a);
    
    if(a<0){
        printf("negative");
    }else if(a==0){
        printf("zero");
    }else{
        printf("positive");
    }
    return 0;
}
    