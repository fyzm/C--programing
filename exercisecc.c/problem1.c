#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void p(int a[],int n);
void maopao(int a[],int n);
int xuanze(int a[],int n, int key);
int main()
{
    int a[20],i,key,flag;
    srand((unsigned)time(NULL));
    for(i=0;i<20;i++)
        a[i]=rand()%100;
    printf("初始数值为：\n");
    p(a,20);
    maopao(a,20);
    printf("冒泡排序后为：\n");
    p(a,20);
    printf("请输入需要查找的数字\n");
    scanf("%d",&key);
    flag=xuanze(a,20,key);
    if(flag>=0)
        printf("查找成功，数字%d在排列后的数组中的位置为%d\n",key,flag);
    else
        printf("查找失败，数字%d不在排列后的数组中\n",key);
    return 0;
}
void p(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
        if (!((i+1)%10))
            printf("\n");
    }
}
void maopao(int a[],int n)
{
    int i,j,t;
    for (i=0;i<n-1;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(a[j]<a[j-1])
            {
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
    }
}

int xuanze(int a[],int n, int key)
{
    int x,y,middle;
    y=n-1;
    x=0;
    while(x<=y)
    {
        middle=(x+y)/2;
        if(a[middle]==key)
        {
            return middle;
            break;
        }
        else if(key<a[middle])
            y=middle-1;
        else if(key>a[middle])
            x=middle+1;
        else
            break;
    }
    return -1;
}

