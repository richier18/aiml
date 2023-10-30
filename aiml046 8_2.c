#include<stdio.h>
#include<string.h>
int main()
{
   int i,j;
   char str[5][25],s[100];
   printf("Enter names in any order:\n");
   for(i=0;i<5;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<5;i++)
    {
      for(j=i+1;j<5;j++)
      {
         if(strcmp(str[i],str[j])>0)
         {
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   printf("The sorted order of names are:\n");
   for(i=0;i<5;i++)
    {
      printf("%s\n",str[i]);
    }
return 0;
}
