# include<stdio.h>
# include<string.h>
int main()
{
    int a[60]={0},b[60]={0},c[60]={0},l1=0,l2=0,l3=0;
    char num1[60],num2[60];
    printf("Enter numbers:");
    scanf("%s%s",num1,num2);
    l1=strlen(num1),l2=strlen(num2);
        for(int x=0;x<l1;x++)
            {
                a[x]=num1[l1-1-x]-'0';
            }
        for(int x=0;x<l2;x++)
            {
                b[x]=num2[l2-1-x]-'0';
            }
    l3=(l1>l2)?l1:l2;
        for(int x=0;x<l3;x++)
            {
                if(a[x]+b[x]+c[x]<10)
                {
                    c[x]=a[x]+b[x]+c[x];
                }
                else
                {
                    c[x]=(c[x]+a[x]+b[x])%10;
                    c[x+1]=c[x+1]+(a[x]+b[x]+c[x])/10;
                    if(x==l3-1) l3++;
                }
                
            }
    printf("The sum:");
        for(int x=l3-1;x>=0;x--)
        {
            printf("%d",c[x]);
        }
return 0;
}