# include<stdio.h>
/*大数加法----体现了计算机，化繁为简以及循环遍历的应用*/

# include<string.h>
int main()
{
    int a[60]={0},b[60]={0},c[60]={0},l1=0,l2=0,l3=0;
    char num1[60],num2[60];
    printf("Enter numbers:");
    scanf("%s%s",num1,num2);
    l1=strlen(num1),l2=strlen(num2);                   //记录大数位数
        for(int x=0;x<l1;x++)                          //存储各位数
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
                    c[x]=(c[x]+a[x]+b[x])%10;          //记得加自己，防止进位不全（易错）
                    c[x+1]=c[x+1]+(a[x]+b[x]+c[x])/10;
                    if(x==l3-1) l3++;                  //防止结果位数大于num1,numn2.
                }
                
            }
    printf("The sum:");                                //以字符形式输出结果
        for(int x=l3-1;x>=0;x--)
        {
            printf("%d",c[x]);
        }
return 0;
}
