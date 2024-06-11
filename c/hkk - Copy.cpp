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
}
}

