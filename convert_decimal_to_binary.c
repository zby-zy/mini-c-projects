#include <stdio.h>
int main()
{
    int acc,acc_dup,mod,sum,base = 1;
    printf("Enter the decimal number: ");
    scanf("%d",&acc);
    acc_dup = acc;
    while(acc != 0)
    {
      mod = acc%2;
      sum = sum + (base*mod);
      acc = acc/2;
      base = base*10;
    }
    printf("The Binary of decimal %d is 0%d,acc_dup,sum);
    return 0;
}
