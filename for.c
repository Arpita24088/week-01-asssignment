# include<stdio.h>

int main(){
    int i;
    for(i=1;i<=100;i=i+1) {
        if(i%3==0) {
            printf("frizz \n");
        }else if(i%5==0) {
            printf("buzz \n");
        }else {
            printf("%d\n",i);
        }
    }
    return 0;
}

