#include <stdio.h>
#include <math.h>
void  main()

{
  int X,P,T=0,y;
 scanf("%d%d",&X,&P);
  while(X!=1)
  {
  T=T+X;      
  y=floor((X*P)/100);
  X=X-y;
  
  }
  printf("%d",T+1);
}

