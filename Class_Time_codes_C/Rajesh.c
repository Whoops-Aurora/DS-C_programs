//C prgram to calculate gross salary
#include<stdio.h>
main()
{
    int bs,da,ra,gs;
    printf("Inpuit your basic salary=");
    scanf("%d",&bs);
    da = bs * 0.4;
    ra = bs * 0.2;
    gs = bs + da + ra;
    printf("Total dearness allowance=%d\n",da);
    printf("Total rent allowance=%d\n",ra);
    printf("Gross salary=%d\n",gs);

}
