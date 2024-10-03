#include<stdio.h>
#include<math.h>
int main()
{

printf("%d\n",6>4 && 9>3);
printf("%d\n",6>4 && 9>13);
printf("%d\n",6>4 || 9>3);
printf("%d\n",6>4 || 9>13);
printf("%d\n",!(6>4));
printf("%d\n",!(6>14));
printf("%d\n",!(6>4) &&(3>4));
printf("%d\n",!(6>41) &&(13>4));



return 0;
}