#include<stdio.h>
int fact(int x){
if(x==1||x==0)
return 1;
else
return x*fact(n-1);
}
void main(){
int n;
scanf("%d",&n);
printf("%d",fact(n));
}