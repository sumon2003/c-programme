#include<stdio.h> 
int main() {
int Tk, N100,N50,N20,N10,N5,N2,N1;
scanf("%d",&Tk);
N100=Tk/100;
N50=(Tk-(N100*100))/50;
N20=(Tk-((N100*100)+(N50*50)))/20;
N10=(Tk-((N100*100)+(N50*50)+(N20*20)))/10;
N5=(Tk-((N100*100)+(N50*50)+(N20*20)+(N10*10)))/5;
N2=(Tk-((N100*100)+(N50*50)+(N20*20)+(N10*10)+(N5*5)))/2;
N1=(Tk-((N100*100)+(N50*50)+(N20*20)+(N10*10)+(N5*5)+(N2*2)))/1;
printf("%d\n",Tk);
printf("%d nota(s) de R$ 100,00\n",N100);
printf("%d nota(s) de R$ 50,00\n",N50);
printf("%d nota(s) de R$ 20,00\n",N20);
printf("%d nota(s) de R$ 10,00\n",N10);
printf("%d nota(s) de R$ 5,00\n",N5);
printf("%d nota(s) de R$ 2,00\n",N2);
printf("%d nota(s) de R$ 1,00\n",N1);
 return 0;
}
