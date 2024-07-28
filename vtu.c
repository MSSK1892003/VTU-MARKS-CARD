#include<stdio.h>
#include<stdlib.h>
int main()
{
char s[100][100],usn[20],name[20],cname[20];
int i,n,im[100],sm[100],sum=0,t[100],tm=0;
float per;
FILE *f;
printf("enter the number of subjects\n");
scanf("%d",&n);
printf("enter ur USN:\n");
scanf("%s",usn);
printf("enter ur NAME:\n");
scanf("%s",name);
printf("enter ur COLLEGE NAME:\n");
scanf("%s",cname);
for(i=0;i<n;i++)
{
printf("enter the subject[%d] name and [IA]marks and [SEE]marks:\n",i+1);
scanf("%s%d%d",s[i],&im[i],&sm[i]);
t[i]=im[i]+sm[i];
}
f=fopen("result.doc","w");
fprintf(f,"\t\tVISVESVARAYA TECHNOLOGICAL UNIVERSITY,BELAGAVI\n");
fprintf(f,"\t\t\t\t---------MARKS CARD-----------\n");
fprintf(f,"\t\tB.E.ELECTRONICS AND COMMUNICATION ENGINEERING\n");
fprintf(f,"NAME OF THE STUDENT:%s\n",name);
fprintf(f,"USN:%s\n",usn);
fprintf(f,"NAME OF THE COLLEGE:%s\n",cname);
fprintf(f,"-------------------------------------------------------------------\n");
fprintf(f,"SL.NO\tSUBJECT NAME\tINTERNAL\tEXTERNAL\tTOTAL\t\tRESULT\n");
fprintf(f,"-------------------------------------------------------------------\n");
for(i=0;i<n;i++)
{
fprintf(f,"%d\t%15s\t%10d\t%10d\t%10d\t\t",i+1,s[i],im[i],sm[i],t[i]);
if(t[i]>=35)
fprintf(f,"PASS\n");
else
fprintf(f,"FAIL\n");
}
for(i=0;i<n;i++)
tm=tm+t[i];
per=tm/n;
fprintf(f,"-------------------------------------------------------------------\n");
fprintf(f,"\n");
fprintf(f,"TOTAL MARKS=%d\n",tm);
fprintf(f,"PERCENTAGE=%f\n",per);
fclose(f);
return 0;
}

