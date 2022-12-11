#include<stdio.h>
void main()
{
    int bs,hra,da,allow,pf,totalsalry;
    char grade;
    printf("Enter the basic salary:");
    scanf("%d",&bs);
    printf("Enter grade:");
    scanf(" %c",&grade);

    hra=0.2*bs;
    da=0.5*bs;

    if(grade=='A')
    {
    allow =1700;
    }
    else if(grade=='B')
    allow=1500;
    else
    allow=1300;

    pf=0.11*bs;
    totalsalry=bs+hra+da+allow-pf;

    printf("Toatal salary=%d",totalsalry);


}
