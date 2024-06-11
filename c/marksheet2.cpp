#include<stdio.h>
struct student
{char name[50];
char rollno[20];
int m1,m2,m3,m4,m5;
};
int main()
{struct student s[50];
int i,n;
printf("Enter Number Of Students :");
scanf("%d",&n);
printf("Enter Records Of Studens\n");
for(i=0;i<n;i++)
{
	printf("\n Student : %d\n",i+1);
	printf("Enter Roll Number :");
	scanf("%d",s[i].rollno);
	printf("Enter Name :");
	scanf("%s",s[i].name);
	printf("Enter Marks 1:");
	scanf("%d",&s[i].m1);
	printf("Enter Marks 2:");
	scanf("%d",&s[i].m2);
	printf("Enter Marks 3:");
	scanf("%d",&s[i].m3);
	printf("Enter Marks 4:");
	scanf("%d",&s[i].m4);
	printf("Enter Marks 5:");
	scanf("%d",&s[i].m5);
}
for(i=0;i<n;i++)
{
	printf("\n\t=============================================");
	printf("\n\t\tInformation Technology Center\n");
	printf("\t\t\t Coimbatore\n");
	printf("\t=============================================\n");
	printf("\t\tstatement of marks\n");
	printf("Branch : CS\t\t\t Student Roll Number:%s",s[i].rollno);
	printf("\n===========================================================");
	printf("Sub Code\t Subject1\t Max Marks\t Passing Marks\t Awarded\t Result");
	printf("=======================================================================\n");
	printf("\n00s1\t\tSubject\t100\t\t35\t\t%d",s[i].m1);
	if(s[i].m1>=35)
	printf("\t\tPass");
	else
	printf("\t\tFail");
	printf("\n00s2\t\tSubject\t100\t\t35\t\t%d",s[i].m2);
	if(s[i].m2>=35)
	printf("\t\tPass");
	else
	printf("\t\tFail");
	printf("\n00s2\t\tSubject\t100\t\t35\t\t%d",s[i].m3);
	if(s[i].m3>=35)
	printf("\t\tPass");
	else
	printf("\t\tFail");
	printf("\n00s2\t\tSubject\t100\t\t35\t\t%d",s[i].m4);
	if(s[i].m4>=35)
	printf("\t\tPass");
	else
	printf("\t\tFail");
	printf("\n00s2\t\tSubject\t100\t\t35\t\t%d",s[i].m5);
	if(s[i].m5>=35)
	printf("\t\tPass");
	else
	printf("\t\tFail");
	printf("\n===========================================================================");
	
}
}

