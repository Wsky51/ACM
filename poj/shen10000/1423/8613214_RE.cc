#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
#include<math.h>
int str0[10000100];
double str1[10000100];
void fun(int n)
{

if(str0[n-1]==-1) 
fun(n-1);
double p=n*1.0;
str1[n]=str1[n-1]+log10(p); 
str0[n]=1;
   
}

int main()
{
     int n;
     long long m;
    memset(str0,-1,sizeof(str0));
    str0[0]=0;
    str1[0]=0.0;
    scanf("%d",&n);
    while(n--)
    {
    scanf("%lld",&m);       
    if(str0[m]==-1)fun(m);
    printf("%d\n",(int)str1[m]+1);         
              
    } 

return 0;    
    
}
