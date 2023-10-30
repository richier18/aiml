#include<stdio.h>

void main()
{
 int choice,i,j;
 char str1[100],str2[100],temp;
 printf("Press\n1 for length of string\n2. for reverse string\n3. compare the strings\n4. copy one string to other\n5. concat the strings\n:-",choice);
 scanf("%d",&choice);

 switch(choice)
 {
     case 1:
 printf("enter string 1\n",str1);
 scanf("%s",&str1);
 i=0;
 while (str1[i] != '\0') {
    i++;
 }
 printf("Length of the string %d\n", i);
 break;

     case 2:
        printf("enter string: ");
        scanf("%s", str1);
        i=0;
        j=0;
        while (str1[i] != '\0') {
            i++;
        }
        i--;
        while (j<i) {
            temp = str1[j];
            str1[j] = str1[i];
            str1[i] = temp;
            j++;
            i--;
        }
printf("REVERSED STRING IS %s\n:",str1);
        break;

      case 3:
        printf("ENTER THE STRING 1:");
        scanf("%s",str1);

        printf("ENTER THE STRING 2:");
        scanf("%s",str2);

        i=0;
        while(str1[i] == str2[i])
        {
            if(str1[i] == '\0')
            {
                printf("STRINGS ARE EQUAL\n");
                return 0;
            }
            i++;
        }
        printf("STRINGS ARE NOT EQUAL\n");
        break;

      case 4:
        printf("ENTER THE STRING 1:");
        scanf("%s",str1);

        printf("ENTER THE STRING 2:");
        scanf("%s",str2);

        while(str1[i]!='\0')
        {
            str2[i] = str1[i];
            i++;

        }
        str2[i]='\0';
        printf("COPIED STRING IS : %s\n",str2);

        break;
      case 5:
        printf("ENTER THE STRING 1:");
        scanf("%s",str1);

        printf("ENTER THE STRING 2:");
        scanf("%s",str2);
        i=0;
        while(str1[i]!= '\0')
        {
            i++;
        }
        j=0;
        while(str2[j]!='\0')
        {
            str1[i]=str2[j];
            i++;
            j++;
        }
        str1[i]='\0';
        printf("CONCATENATED STRING : %s\n",str1);
        break;

      default:

      printf("INVALID OPTION\n");
    }

}
