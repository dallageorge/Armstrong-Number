

#include <stdio.h>
#include <math.h>

int main()
{
    int x,din,sum,i,a,b,cou;
    cou=1;
    scanf("%d",&x);
    if (x<=0){
        printf("Wrong Input");
    }
    else{
        din=((int)(log10(x))+1); //din -- > amount of digits

        sum=0;
        for (i=din;i>0;i=i-1){
            a=x/(int)(pow(10,i-1));
            b=a%(int)((pow(10,cou)));

            sum=sum+(int)(pow(b,din));

          }
          if (sum==x){
              printf("yes");}
            else{
            printf("no");
          }
        
    }
    return 0;
}
