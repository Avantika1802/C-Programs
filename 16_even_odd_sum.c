#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int x=0,even_sum=0,odd_sum=0;

    int i=1;
    while(n>0){
        x=n%10;
        if(i%2!=0){
            odd_sum+=x;
        }
        else{
            even_sum+=x;
        }
        n=n/10;
        i++;
    }
    printf("Odd Sum: %d\nEven Sum: %d",odd_sum,even_sum);
    return 0;
}