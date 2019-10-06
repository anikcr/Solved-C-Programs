#include<stdio.h>
void main()
{
  int a[10],n,i,j,temp;


      for(i=0;i<n;i++)
        scanf("%d",&a[i]);
      for(j=i+1;j<n;j++)
        if(a[i]>a[j])
      {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
      }
      for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
