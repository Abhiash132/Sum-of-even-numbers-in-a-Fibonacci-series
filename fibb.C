#include<stdio.h>
#include<conio.h>
void main() {
int t1,t2,next=0,n,sum=0,a,i,b[100];
clrscr();
scanf("%d",&a);
for(i=0;i<a;i++){
scanf("%d",&n);
b[i]=n;
}
printf("Output:\n");
for (i=0;i<a;i++){
t1=0;
t2=1;
sum=0;
n=b[i];
next=t1+t2;
while (next<=n) {
if (next%2==0){
sum+=next;
}
t1=t2;
t2=next;
next=t1+t2;
}
printf("%d\n",sum);
}
getch();
}
