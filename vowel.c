#include<stdio.h>
#include<string.h>
int main()
{
  char str[30],vowel[30];
  int i,j,count=0,c=0;
  scanf("%s",str);
  for(i=0;i<strlen(str);i++)
  {if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
   {vowel[count]=str[i];
    count++;
    str[i]='*';
   }
   else
    continue;
  }
 /* for(i=0;i<strlen(str);i++)
    printf("%c ",str[i]);
   printf("\n");
  for(i=0;i<count;i++)
   printf("%c ",vowel[i]);
  printf("\n");*/
 for(i=0;i<strlen(str);i++)
 {for(j=count-1;j>=0;j--)
   {if(str[i]=='*')
     { str[i]=vowel[j];
       count--;
       break;
     }
   }
 }
 for(i=0;i<strlen(str);i++)
   printf("%c",str[i]);
 printf("\n");
 return 0;
}
